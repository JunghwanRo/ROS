# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/param.proto

require 'google/protobuf'

require 'gz/msgs/any_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Param" do
    optional :header, :message, 1, "gz.msgs.Header"
    map :params, :string, :message, 2, "gz.msgs.Any"
    repeated :children, :message, 3, "gz.msgs.Param"
  end
end

module Gz
  module Msgs
    Param = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Param").msgclass
  end
end
