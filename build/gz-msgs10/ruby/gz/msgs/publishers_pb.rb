# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/publishers.proto

require 'google/protobuf'

require 'gz/msgs/publish_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Publishers" do
    optional :header, :message, 1, "gz.msgs.Header"
    repeated :publisher, :message, 2, "gz.msgs.Publish"
  end
end

module Gz
  module Msgs
    Publishers = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Publishers").msgclass
  end
end
