// Auto-generated. Do not edit!

// (in-package gs_vision.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let ArUco = require('./ArUco.js');

//-----------------------------------------------------------

class ArUco_array {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.arucos = null;
    }
    else {
      if (initObj.hasOwnProperty('arucos')) {
        this.arucos = initObj.arucos
      }
      else {
        this.arucos = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ArUco_array
    // Serialize message field [arucos]
    // Serialize the length for message field [arucos]
    bufferOffset = _serializer.uint32(obj.arucos.length, buffer, bufferOffset);
    obj.arucos.forEach((val) => {
      bufferOffset = ArUco.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ArUco_array
    let len;
    let data = new ArUco_array(null);
    // Deserialize message field [arucos]
    // Deserialize array length for message field [arucos]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.arucos = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.arucos[i] = ArUco.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 36 * object.arucos.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'gs_vision/ArUco_array';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '953ee5206a9a587ec30074fd93cdec00';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    ArUco[] arucos
    ================================================================================
    MSG: gs_vision/ArUco
    int32 id
    float32 x1
    float32 y1
    float32 x2
    float32 y2
    float32 x3
    float32 y3
    float32 x4
    float32 y4
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ArUco_array(null);
    if (msg.arucos !== undefined) {
      resolved.arucos = new Array(msg.arucos.length);
      for (let i = 0; i < resolved.arucos.length; ++i) {
        resolved.arucos[i] = ArUco.Resolve(msg.arucos[i]);
      }
    }
    else {
      resolved.arucos = []
    }

    return resolved;
    }
};

module.exports = ArUco_array;
