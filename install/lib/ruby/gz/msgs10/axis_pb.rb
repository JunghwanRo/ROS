# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/axis.proto

require 'google/protobuf'

require 'gz/msgs/vector3d_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Axis" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :xyz, :message, 2, "gz.msgs.Vector3d"
    optional :limit_lower, :double, 3
    optional :limit_upper, :double, 4
    optional :limit_effort, :double, 5
    optional :limit_velocity, :double, 6
    optional :damping, :double, 7
    optional :friction, :double, 8
    optional :position, :double, 10
    optional :velocity, :double, 11
    optional :force, :double, 12
    optional :acceleration, :double, 13
    optional :xyz_expressed_in, :string, 14
  end
end

module Gz
  module Msgs
    Axis = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Axis").msgclass
  end
end
