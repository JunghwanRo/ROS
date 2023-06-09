# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/dvl_beam_state.proto

require 'google/protobuf'

require 'gz/msgs/dvl_kinematic_estimate_pb'
require 'gz/msgs/dvl_range_estimate_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.DVLBeamState" do
    optional :id, :int32, 1
    optional :velocity, :message, 2, "gz.msgs.DVLKinematicEstimate"
    optional :range, :message, 3, "gz.msgs.DVLRangeEstimate"
    optional :rssi, :double, 4
    optional :nsd, :double, 5
    optional :locked, :bool, 6
  end
end

module Gz
  module Msgs
    DVLBeamState = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.DVLBeamState").msgclass
  end
end
