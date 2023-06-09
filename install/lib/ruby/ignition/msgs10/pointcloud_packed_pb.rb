# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/pointcloud_packed.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.PointCloudPacked" do
    optional :header, :message, 1, "gz.msgs.Header"
    repeated :field, :message, 2, "gz.msgs.PointCloudPacked.Field"
    optional :height, :uint32, 3
    optional :width, :uint32, 4
    optional :is_bigendian, :bool, 5
    optional :point_step, :uint32, 6
    optional :row_step, :uint32, 7
    optional :data, :bytes, 8
    optional :is_dense, :bool, 9
  end
  add_message "gz.msgs.PointCloudPacked.Field" do
    optional :name, :string, 1
    optional :offset, :uint32, 2
    optional :datatype, :enum, 3, "gz.msgs.PointCloudPacked.Field.DataType"
    optional :count, :uint32, 4
  end
  add_enum "gz.msgs.PointCloudPacked.Field.DataType" do
    value :INT8, 0
    value :UINT8, 1
    value :INT16, 2
    value :UINT16, 3
    value :INT32, 4
    value :UINT32, 5
    value :FLOAT32, 6
    value :FLOAT64, 7
  end
end

module Gz
  module Msgs
    PointCloudPacked = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.PointCloudPacked").msgclass
    PointCloudPacked::Field = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.PointCloudPacked.Field").msgclass
    PointCloudPacked::Field::DataType = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.PointCloudPacked.Field.DataType").enummodule
  end
end
