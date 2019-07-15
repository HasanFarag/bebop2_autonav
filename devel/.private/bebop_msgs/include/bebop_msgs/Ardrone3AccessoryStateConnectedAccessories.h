// Generated by gencpp from file bebop_msgs/Ardrone3AccessoryStateConnectedAccessories.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_ARDRONE3ACCESSORYSTATECONNECTEDACCESSORIES_H
#define BEBOP_MSGS_MESSAGE_ARDRONE3ACCESSORYSTATECONNECTEDACCESSORIES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace bebop_msgs
{
template <class ContainerAllocator>
struct Ardrone3AccessoryStateConnectedAccessories_
{
  typedef Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> Type;

  Ardrone3AccessoryStateConnectedAccessories_()
    : header()
    , id(0)
    , accessory_type(0)
    , uid()
    , swVersion()  {
    }
  Ardrone3AccessoryStateConnectedAccessories_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , accessory_type(0)
    , uid(_alloc)
    , swVersion(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _id_type;
  _id_type id;

   typedef uint8_t _accessory_type_type;
  _accessory_type_type accessory_type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uid_type;
  _uid_type uid;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _swVersion_type;
  _swVersion_type swVersion;



  enum {
    accessory_type_sequoia = 0u,
    accessory_type_unknownaccessory_1 = 1u,
  };


  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> const> ConstPtr;

}; // struct Ardrone3AccessoryStateConnectedAccessories_

typedef ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<std::allocator<void> > Ardrone3AccessoryStateConnectedAccessories;

typedef boost::shared_ptr< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories > Ardrone3AccessoryStateConnectedAccessoriesPtr;
typedef boost::shared_ptr< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories const> Ardrone3AccessoryStateConnectedAccessoriesConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'bebop_msgs': ['/home/parrot/bebop_ws/src/bebop_autonomy/bebop_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4c105add6586231e3d438d1252e04c7e";
  }

  static const char* value(const ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4c105add6586231eULL;
  static const uint64_t static_value2 = 0x3d438d1252e04c7eULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/Ardrone3AccessoryStateConnectedAccessories";
  }

  static const char* value(const ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Ardrone3AccessoryStateConnectedAccessories\n\
# auto-generated from up stream XML files at\n\
#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n\
# To check upstream commit hash, refer to last_build_info file\n\
# Do not modify this file by hand. Check scripts/meta folder for generator files.\n\
#\n\
# SDK Comment: List of all connected accessories. This event presents the list of all connected accessories. To actually use the component, use the component dedicated feature.\n\
\n\
Header header\n\
\n\
# Id of the accessory for the session.\n\
uint8 id\n\
# Accessory type\n\
uint8 accessory_type_sequoia=0  # Parrot Sequoia (multispectral camera for agriculture)\n\
uint8 accessory_type_unknownaccessory_1=1  # UNKNOWNACCESSORY_1 camera (thermal+rgb camera)\n\
uint8 accessory_type\n\
# Unique Id of the accessory. This id is unique by accessory_type.\n\
string uid\n\
# Software Version of the accessory.\n\
string swVersion\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.accessory_type);
      stream.next(m.uid);
      stream.next(m.swVersion);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Ardrone3AccessoryStateConnectedAccessories_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::Ardrone3AccessoryStateConnectedAccessories_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "accessory_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.accessory_type);
    s << indent << "uid: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uid);
    s << indent << "swVersion: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.swVersion);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_ARDRONE3ACCESSORYSTATECONNECTEDACCESSORIES_H
