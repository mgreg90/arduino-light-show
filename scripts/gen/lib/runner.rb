require_relative './generators'
require_relative './input_parser'

module Gen
  class Runner

    def self.call(argv = [])
      new(argv).call
    end

    def initialize(argv)
      @argv = argv
      @inputs = InputParser.new(@argv)
    end

    def call
      begin
        @inputs.parse!
      rescue InputParser::ParserError => e
        puts "Error - #{e.message}"
        exit
      end

      return if @inputs.type == :help
      generator.(@inputs.name)
    end

    private

    def generator
      @generator ||= case @inputs.type
      when :effect
        EffectGenerator
      end
    end

  end
end