require 'bundler/inline'

gemfile do
  gem 'playwright-cli', path: '/Users/mikegregory/dev-projects/playwright-cli'
end

class ExampleCli < Playwright::Cli::Base
  version '0.0.1'
  # Define a run method and put logic there
  def run
    p 'wow'
  end
end

ExampleCli.call(ARGV)