# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/parameter_value.proto

require 'google/protobuf'

require 'google/protobuf/any_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.ParameterValue" do
    optional :data, :message, 1, "google.protobuf.Any"
  end
end

module Gz
  module Msgs
    ParameterValue = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.ParameterValue").msgclass
  end
end