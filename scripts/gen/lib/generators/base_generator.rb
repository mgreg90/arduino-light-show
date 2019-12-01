module Gen
  class BaseGenerator
    GeneratorError = Class.new(StandardError)

    LIBRARIES_DIR = "../../../../../libraries"
    TEMPLATES_DIR = "../../../templates/Effect"

    def self.call(name)
      new(name).call
    end

    def initialize name
      @name = name
    end

    def name
      @name.split(/[-_]/).map(&:capitalize).join
    end

    protected

    def libraries_dir
      Pathname.new File.expand_path(File.join(__FILE__, LIBRARIES_DIR))
    end

    def templates_dir
      Pathname.new File.expand_path(File.join(__FILE__, TEMPLATES_DIR))
    end

  end
end