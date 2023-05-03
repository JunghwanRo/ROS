# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/joint_animation.proto

require 'google/protobuf'

require 'gz/msgs/time_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.JointAnimation" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :model_name, :string, 2
    repeated :joint, :message, 3, "gz.msgs.JointAnimation.Joint"
    repeated :time, :message, 4, "gz.msgs.Time"
  end
  add_message "gz.msgs.JointAnimation.Joint" do
    repeated :name, :string, 1
    repeated :angle, :double, 2
  end
end

module Gz
  module Msgs
    JointAnimation = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.JointAnimation").msgclass
    JointAnimation::Joint = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.JointAnimation.Joint").msgclass
  end
end