/* Auto-generated by genmsg_cpp for file /home/luca/Projects/MarkerBasedNavigation/mbn_msgs/msg/MarkersPoses.msg */
#ifndef MBN_MSGS_MESSAGE_MARKERSPOSES_H
#define MBN_MSGS_MESSAGE_MARKERSPOSES_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "mbn_msgs/MarkerPose.h"

namespace mbn_msgs
{
template <class ContainerAllocator>
struct MarkersPoses_ {
  typedef MarkersPoses_<ContainerAllocator> Type;

  MarkersPoses_()
  : header()
  , markersPoses()
  {
  }

  MarkersPoses_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , markersPoses(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::mbn_msgs::MarkerPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mbn_msgs::MarkerPose_<ContainerAllocator> >::other >  _markersPoses_type;
  std::vector< ::mbn_msgs::MarkerPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mbn_msgs::MarkerPose_<ContainerAllocator> >::other >  markersPoses;


  ROS_DEPRECATED uint32_t get_markersPoses_size() const { return (uint32_t)markersPoses.size(); }
  ROS_DEPRECATED void set_markersPoses_size(uint32_t size) { markersPoses.resize((size_t)size); }
  ROS_DEPRECATED void get_markersPoses_vec(std::vector< ::mbn_msgs::MarkerPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mbn_msgs::MarkerPose_<ContainerAllocator> >::other > & vec) const { vec = this->markersPoses; }
  ROS_DEPRECATED void set_markersPoses_vec(const std::vector< ::mbn_msgs::MarkerPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mbn_msgs::MarkerPose_<ContainerAllocator> >::other > & vec) { this->markersPoses = vec; }
private:
  static const char* __s_getDataType_() { return "mbn_msgs/MarkersPoses"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "85996b685f70d0d47e1dc6988356a1cf"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
MarkerPose[] markersPoses\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: mbn_msgs/MarkerPose\n\
Header header\n\
int32 marker_id\n\
geometry_msgs/Pose poseWRTRobotFrame\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, markersPoses);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, markersPoses);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(markersPoses);
    return size;
  }

  typedef boost::shared_ptr< ::mbn_msgs::MarkersPoses_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mbn_msgs::MarkersPoses_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MarkersPoses
typedef  ::mbn_msgs::MarkersPoses_<std::allocator<void> > MarkersPoses;

typedef boost::shared_ptr< ::mbn_msgs::MarkersPoses> MarkersPosesPtr;
typedef boost::shared_ptr< ::mbn_msgs::MarkersPoses const> MarkersPosesConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::mbn_msgs::MarkersPoses_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::mbn_msgs::MarkersPoses_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace mbn_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::mbn_msgs::MarkersPoses_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::mbn_msgs::MarkersPoses_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::mbn_msgs::MarkersPoses_<ContainerAllocator> > {
  static const char* value() 
  {
    return "85996b685f70d0d47e1dc6988356a1cf";
  }

  static const char* value(const  ::mbn_msgs::MarkersPoses_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x85996b685f70d0d4ULL;
  static const uint64_t static_value2 = 0x7e1dc6988356a1cfULL;
};

template<class ContainerAllocator>
struct DataType< ::mbn_msgs::MarkersPoses_<ContainerAllocator> > {
  static const char* value() 
  {
    return "mbn_msgs/MarkersPoses";
  }

  static const char* value(const  ::mbn_msgs::MarkersPoses_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::mbn_msgs::MarkersPoses_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
MarkerPose[] markersPoses\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: mbn_msgs/MarkerPose\n\
Header header\n\
int32 marker_id\n\
geometry_msgs/Pose poseWRTRobotFrame\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::mbn_msgs::MarkersPoses_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::mbn_msgs::MarkersPoses_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::mbn_msgs::MarkersPoses_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::mbn_msgs::MarkersPoses_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.markersPoses);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MarkersPoses_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mbn_msgs::MarkersPoses_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::mbn_msgs::MarkersPoses_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "markersPoses[]" << std::endl;
    for (size_t i = 0; i < v.markersPoses.size(); ++i)
    {
      s << indent << "  markersPoses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mbn_msgs::MarkerPose_<ContainerAllocator> >::stream(s, indent + "    ", v.markersPoses[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // MBN_MSGS_MESSAGE_MARKERSPOSES_H
