# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/fluid_pressure.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.FluidPressure" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :pressure, :double, 2
    optional :variance, :double, 3
  end
end

module Gz
  module Msgs
    FluidPressure = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.FluidPressure").msgclass
  end
end
