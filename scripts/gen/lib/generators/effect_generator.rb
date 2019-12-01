module Gen
  class EffectGenerator < BaseGenerator

    def call
      create_directory

      render_file(:header)
      render_file(:cpp)
    end

    private

    def library_dir
      libraries_dir.join(name)
    end

    def header_file
      library_dir.join("#{name}.h")
    end

    def cpp_file
      library_dir.join("#{name}.cpp")
    end

    def create_directory
      FileUtils.mkdir_p library_dir
    end

    def create_header_file
      FileUtils.touch header_file
    end

    def create_cpp_file
      FileUtils.touch cpp_file
    end

    def render_file type
      case type
      when :cpp
        template = templates_dir.join("Effect.cpp.erb")
        file = cpp_file
      when :header
        template = templates_dir.join("Effect.h.erb")
        file = header_file
      else
        raise GeneratorError.new "Must choose a type of file to render!"
      end

      template_contents = File.read(template)
      contents = ERB.new(template_contents).result(binding)
      FileUtils.touch file
      File.open(file, 'w+') do |file|
        file.write contents
      end
    end

  end
end