# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/parameter.proto

require 'google/protobuf'

require 'google/protobuf/any_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Parameter" do
    optional :name, :string, 1
    optional :value, :message, 2, "google.protobuf.Any"
  end
end

module Gz
  module Msgs
    Parameter = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Parameter").msgclass
  end
end
