require 'bundler/inline'

gemfile do
  gem 'pry'
  gem 'pry-nav'
end

%w[ optparse pathname erb ].each { |f| require f }

require_relative "./lib/runner"

module Gen
end

Gen::Runner.(ARGV)