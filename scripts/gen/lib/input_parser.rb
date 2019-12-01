module Gen
  class InputParser
    ParserError = Class.new(StandardError)

    USAGE = <<~HELP
      Usage: bin/gen [TYPE] [NAME] [OPTIONS]

      TYPE  Type of library to generate (project, effect)
      NAME  Name of new library
    HELP

    attr_reader :name, :type

    def initialize(argv)
      @argv = argv
    end

    def parse!
      @type = :help if ['-h', '--help'].include?(@argv.first)
      opt_parser = OptionParser.new do |opts|
        opts.banner = USAGE
      end

      opt_parser.parse!(@argv)
      @type ||= parse_type(@argv.first)
      @name = @argv[1]
      validate!
      self
    end

    def validate!
      return if @type == :help
      raise ParserError.new "No type!\n\n#{USAGE}" if !type
      raise ParserError.new "No name given!\n\n#{USAGE}" if !name
    end

    def parse_type(input)
      return nil if !input
      case input.downcase
      when 'project'
        raise ParserError.new "Project not yet supported!\n\n#{USAGE}"
      when 'effect'
        :effect
      else
        raise ParserError.new "Cannot determine type! Allowed type: project, effect\n\n#{USAGE}"
      end
    end

  end
end
