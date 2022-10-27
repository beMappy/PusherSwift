// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef PUSHERSWIFT_SWIFT_H
#define PUSHERSWIFT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PusherSwift",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;
@class NSURLRequest;

SWIFT_PROTOCOL("_TtP11PusherSwift26AuthRequestBuilderProtocol_")
@protocol AuthRequestBuilderProtocol
@optional
- (NSURLRequest * _Nullable)requestForSocketID:(NSString * _Nonnull)socketID channelName:(NSString * _Nonnull)channelName SWIFT_WARN_UNUSED_RESULT;
@end

@class PusherAuth;

SWIFT_PROTOCOL("_TtP11PusherSwift10Authorizer_")
@protocol Authorizer
- (void)fetchAuthValueWithSocketID:(NSString * _Nonnull)socketID channelName:(NSString * _Nonnull)channelName completionHandler:(void (^ _Nonnull)(PusherAuth * _Nullable))completionHandler;
@end

typedef SWIFT_ENUM(NSInteger, ConnectionState, closed) {
  ConnectionStateConnecting = 0,
  ConnectionStateConnected = 1,
  ConnectionStateDisconnecting = 2,
  ConnectionStateDisconnected = 3,
  ConnectionStateReconnecting = 4,
};

@class PusherConnection;
@class PusherEvent;

SWIFT_CLASS("_TtC11PusherSwift13PusherChannel")
@interface PusherChannel : NSObject
@property (nonatomic) BOOL subscribed;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, weak) PusherConnection * _Nullable connection;
@property (nonatomic, strong) PusherAuth * _Nullable auth;
@property (nonatomic, copy) void (^ _Nullable onSubscriptionCountChanged)(NSInteger);
/// Initializes a new PusherChannel with a given name and connection
/// \param name The name of the channel
///
/// \param connection The connection that this channel is relevant to
///
/// \param auth A PusherAuth value if subscription is being made to an
/// authenticated channel without using the default auth methods
///
///
/// returns:
/// A new PusherChannel instance
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name connection:(PusherConnection * _Nonnull)connection auth:(PusherAuth * _Nullable)auth onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged OBJC_DESIGNATED_INITIALIZER;
- (void)updateSubscriptionCountWithCount:(NSInteger)count;
/// Binds a callback to a given event name, scoped to the PusherChannel the function is
/// called on
/// \param eventName The name of the event to bind to
///
/// \param eventCallback The function to call when a new event is received. The callback
/// receives a PusherEvent, containing the event’s data payload and
/// other properties.
///
///
/// returns:
/// A unique callbackId that can be used to unbind the callback at a later time
- (NSString * _Nonnull)bindWithEventName:(NSString * _Nonnull)eventName eventCallback:(void (^ _Nonnull)(PusherEvent * _Nonnull))eventCallback;
/// Unbinds the callback with the given callbackId from the given eventName, in the scope
/// of the channel being acted upon
/// \param eventName The name of the event from which to unbind
///
/// \param callbackId The unique callbackId string used to identify which callback to unbind
///
- (void)unbindWithEventName:(NSString * _Nonnull)eventName callbackId:(NSString * _Nonnull)callbackId;
/// Unbinds all callbacks from the channel
- (void)unbindAll;
/// Unbinds all callbacks for the given eventName from the channel
/// \param eventName The name of the event from which to unbind
///
- (void)unbindAllForEventName:(NSString * _Nonnull)eventName;
/// Calls the appropriate callbacks for the given eventName in the scope of the acted upon channel
/// \param event The event received from the websocket
///
- (void)handleEventWithEvent:(PusherEvent * _Nonnull)event;
/// If subscribed, immediately call the connection to trigger a client event with the given
/// eventName and data, otherwise queue it up to be triggered upon successful subscription
/// \param eventName The name of the event to trigger
///
/// \param data The data to be sent as the message payload
///
- (void)triggerWithEventName:(NSString * _Nonnull)eventName data:(id _Nonnull)data;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11PusherSwift13GlobalChannel")
@interface GlobalChannel : PusherChannel
/// Initializes a new GlobalChannel instance
/// \param connection The connection associated with the global channel
///
///
/// returns:
/// A new GlobalChannel instance
- (nonnull instancetype)initWithConnection:(PusherConnection * _Nonnull)connection OBJC_DESIGNATED_INITIALIZER;
/// Calls the appropriate callbacks for the given event name in the scope of the global channel
/// \param event The event received from the websocket
///
- (void)handleGlobalEventWithEvent:(PusherEvent * _Nonnull)event;
/// Binds a callback to the global channel
/// \param callback The function to call when a message is received
///
///
/// returns:
/// A unique callbackId that can be used to unbind the callback at a later time
- (NSString * _Nonnull)bind:(void (^ _Nonnull)(PusherEvent * _Nonnull))callback SWIFT_WARN_UNUSED_RESULT;
/// Unbinds the callback with the given callbackId from the global channel
/// \param callbackId The unique callbackId string used to identify which callback to unbind
///
- (void)unbindWithCallbackId:(NSString * _Nonnull)callbackId;
/// Unbinds all callbacks from the channel
- (void)unbindAll;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name connection:(PusherConnection * _Nonnull)connection auth:(PusherAuth * _Nullable)auth onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11PusherSwift12OCAuthMethod")
@interface OCAuthMethod : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic, copy) NSString * _Nullable secret;
@property (nonatomic, copy) NSString * _Nullable authEndpoint;
@property (nonatomic, strong) id <AuthRequestBuilderProtocol> _Nullable authRequestBuilder;
@property (nonatomic, strong) id <Authorizer> _Nullable authorizer;
- (nonnull instancetype)initWithType:(NSInteger)type OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAuthEndpoint:(NSString * _Nonnull)authEndpoint OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAuthRequestBuilder:(id <AuthRequestBuilderProtocol> _Nonnull)authRequestBuilder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithSecret:(NSString * _Nonnull)secret OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAuthorizer:(id <Authorizer> _Nonnull)authorizer OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11PusherSwift12OCPusherHost")
@interface OCPusherHost : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic, copy) NSString * _Nullable host;
@property (nonatomic, copy) NSString * _Nullable cluster;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithHost:(NSString * _Nonnull)host OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCluster:(NSString * _Nonnull)cluster OBJC_DESIGNATED_INITIALIZER;
@end

@protocol PusherDelegate;
@class PusherClientOptions;
@class PusherPresenceChannelMember;
@class PusherPresenceChannel;

SWIFT_CLASS("_TtC11PusherSwift6Pusher")
@interface Pusher : NSObject
@property (nonatomic, readonly, strong) PusherConnection * _Nonnull connection;
@property (nonatomic, weak) id <PusherDelegate> _Nullable delegate;
/// Initializes the Pusher client with an app key and any appropriate options.
/// \param key The Pusher app key
///
/// \param options An optional collection of options
///
///
/// returns:
/// A new Pusher client instance
- (nonnull instancetype)initWithKey:(NSString * _Nonnull)key options:(PusherClientOptions * _Nonnull)options OBJC_DESIGNATED_INITIALIZER;
/// Subscribes the client to a new channel
/// \param channelName The name of the channel to subscribe to
///
/// \param auth A PusherAuth value if subscription is being made to an
/// authenticated channel without using the default auth methods
///
/// \param onMemberAdded A function that will be called with information about the
/// member who has just joined the presence channel
///
/// \param onMemberRemoved A function that will be called with information about the
/// member who has just left the presence channel
///
///
/// returns:
/// A new PusherChannel instance
- (PusherChannel * _Nonnull)subscribe:(NSString * _Nonnull)channelName auth:(PusherAuth * _Nullable)auth onMemberAdded:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberAdded onMemberRemoved:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberRemoved onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_WARN_UNUSED_RESULT;
/// Subscribes the client to a new presence channel. Use this instead of the subscribe
/// function when you want a presence channel object to be returned instead of just a
/// generic channel object (which you can then cast)
/// \param channelName The name of the channel to subscribe to
///
/// \param auth A PusherAuth value if subscription is being made to an
/// authenticated channel without using the default auth methods
///
/// \param onMemberAdded A function that will be called with information about the
/// member who has just joined the presence channel
///
/// \param onMemberRemoved A function that will be called with information about the
/// member who has just left the presence channel
///
///
/// returns:
/// A new PusherPresenceChannel instance
- (PusherPresenceChannel * _Nonnull)subscribeToPresenceChannelWithChannelName:(NSString * _Nonnull)channelName auth:(PusherAuth * _Nullable)auth onMemberAdded:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberAdded onMemberRemoved:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberRemoved onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_WARN_UNUSED_RESULT;
/// Unsubscribes the client from a given channel
/// \param channelName The name of the channel to unsubscribe from
///
- (void)unsubscribe:(NSString * _Nonnull)channelName;
/// Unsubscribes the client from all channels
- (void)unsubscribeAll;
/// Binds the client’s global channel to all events
/// \param eventCallback The function to call when a new event is received. The callback
/// receives a PusherEvent, containing the event’s data payload and
/// other properties.
///
///
/// returns:
/// A unique string that can be used to unbind the callback from the client
- (NSString * _Nonnull)bindWithEventCallback:(void (^ _Nonnull)(PusherEvent * _Nonnull))eventCallback;
/// Unbinds the client from its global channel
/// \param callbackId The unique callbackId string used to identify which callback
/// to unbind
///
- (void)unbindWithCallbackId:(NSString * _Nonnull)callbackId;
/// Unbinds the client from all global callbacks
- (void)unbindAll;
/// Disconnects the client’s connection
- (void)disconnect;
/// Initiates a connection attempt using the client’s existing connection details
- (void)connect;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface Pusher (SWIFT_EXTENSION(PusherSwift))
- (PusherChannel * _Nonnull)subscribeWithChannelName:(NSString * _Nonnull)channelName SWIFT_WARN_UNUSED_RESULT;
- (PusherChannel * _Nonnull)subscribeWithChannelName:(NSString * _Nonnull)channelName onMemberAdded:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberAdded onMemberRemoved:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberRemoved onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_WARN_UNUSED_RESULT;
- (PusherPresenceChannel * _Nonnull)subscribeToPresenceChannelWithChannelName:(NSString * _Nonnull)channelName SWIFT_WARN_UNUSED_RESULT;
- (PusherPresenceChannel * _Nonnull)subscribeToPresenceChannelWithChannelName:(NSString * _Nonnull)channelName onMemberAdded:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberAdded onMemberRemoved:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberRemoved onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithAppKey:(NSString * _Nonnull)key options:(PusherClientOptions * _Nonnull)options;
- (nonnull instancetype)initWithKey:(NSString * _Nonnull)key;
@end


SWIFT_CLASS("_TtC11PusherSwift10PusherAuth")
@interface PusherAuth : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface PusherChannel (SWIFT_EXTENSION(PusherSwift))
/// Determines whether or not a message should be decrypted, based on channel and event attributes.
/// \param name The name of the channel.
///
/// \param eventName The name of the event received on the channel.
///
///
/// returns:
/// A <code>Bool</code> indicating whether the message should be decrypted or not.
+ (BOOL)decryptsMessageWithName:(NSString * _Nullable)name eventName:(NSString * _Nonnull)eventName SWIFT_WARN_UNUSED_RESULT;
/// Determines if a channel is a private encrypted or not, based on its name.
/// \param name The name of the channel.
///
///
/// returns:
/// A <code>Bool</code> indicating whether the channel is encrypted or not.
+ (BOOL)isEncryptedWithName:(NSString * _Nullable)name SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC11PusherSwift14PusherChannels")
@interface PusherChannels : NSObject
@property (nonatomic, copy) NSDictionary<NSString *, PusherChannel *> * _Nonnull channels;
/// Create a new PusherChannel, which is returned, and add it to the PusherChannels list
/// of channels
/// \param name The name of the channel to create
///
/// \param connection The connection associated with the channel being created
///
/// \param auth A PusherAuth value if subscription is being made to an
/// authenticated channel without using the default auth methods
///
/// \param onMemberAdded A function that will be called with information about the
/// member who has just joined the presence channel
///
/// \param onMemberRemoved A function that will be called with information about the
/// member who has just left the presence channel
///
///
/// returns:
/// A new PusherChannel instance
- (PusherChannel * _Nonnull)addWithName:(NSString * _Nonnull)name connection:(PusherConnection * _Nonnull)connection auth:(PusherAuth * _Nullable)auth onMemberAdded:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberAdded onMemberRemoved:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberRemoved onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_WARN_UNUSED_RESULT;
/// Create a new PresencePusherChannel, which is returned, and add it to the PusherChannels
/// list of channels
/// \param channelName The name of the channel to create
///
/// \param connection The connection associated with the channel being created
///
/// \param auth A PusherAuth value if subscription is being made to an
/// authenticated channel without using the default auth methods
///
/// \param onMemberAdded A function that will be called with information about the
/// member who has just joined the presence channel
///
/// \param onMemberRemoved A function that will be called with information about the
/// member who has just left the presence channel
///
///
/// returns:
/// A new PusherPresenceChannel instance
- (PusherPresenceChannel * _Nonnull)addPresenceWithChannelName:(NSString * _Nonnull)channelName connection:(PusherConnection * _Nonnull)connection auth:(PusherAuth * _Nullable)auth onMemberAdded:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberAdded onMemberRemoved:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberRemoved onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_WARN_UNUSED_RESULT;
/// Remove the PusherChannel with the given channelName from the channels list
/// \param name The name of the channel to remove
///
- (void)removeWithName:(NSString * _Nonnull)name;
/// Return the PusherChannel with the given channelName from the channels list, if it exists
/// \param name The name of the channel to return
///
///
/// returns:
/// A PusherChannel instance, if a channel with the given name existed, otherwise nil
- (PusherChannel * _Nullable)findWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
/// Return the PusherPresenceChannel with the given channelName from the channels list, if it exists
/// \param name The name of the presence channel to return
///
///
/// returns:
/// A PusherPresenceChannel instance, if a channel with the given name existed,
/// otherwise nil
- (PusherPresenceChannel * _Nullable)findPresenceWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11PusherSwift19PusherClientOptions")
@interface PusherClientOptions : NSObject
@property (nonatomic, readonly) BOOL attemptToReturnJSONObject;
@property (nonatomic, readonly) BOOL autoReconnect;
@property (nonatomic, readonly, copy) NSString * _Nonnull host;
@property (nonatomic, readonly) NSInteger port;
@property (nonatomic, readonly, copy) NSString * _Nullable path;
@property (nonatomic, readonly) BOOL useTLS;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSNumber;

@interface PusherClientOptions (SWIFT_EXTENSION(PusherSwift))
- (nonnull instancetype)initWithOcAuthMethod:(OCAuthMethod * _Nonnull)authMethod autoReconnect:(BOOL)autoReconnect ocHost:(OCPusherHost * _Nonnull)host port:(NSNumber * _Nullable)port useTLS:(BOOL)useTLS activityTimeout:(NSNumber * _Nullable)activityTimeout;
- (nonnull instancetype)initWithOcAuthMethod:(OCAuthMethod * _Nonnull)authMethod attemptToReturnJSONObject:(BOOL)attemptToReturnJSONObject autoReconnect:(BOOL)autoReconnect ocHost:(OCPusherHost * _Nonnull)host port:(NSNumber * _Nullable)port useTLS:(BOOL)useTLS activityTimeout:(NSNumber * _Nullable)activityTimeout;
- (nonnull instancetype)initWithAuthMethod:(OCAuthMethod * _Nonnull)authMethod;
- (void)setAuthMethodWithAuthMethod:(OCAuthMethod * _Nonnull)authMethod;
@end

@class NSURLSession;
@class NSTimer;
@class PusherError;

SWIFT_CLASS("_TtC11PusherSwift16PusherConnection")
@interface PusherConnection : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull url;
@property (nonatomic, readonly, copy) NSString * _Nonnull key;
@property (nonatomic, strong) PusherClientOptions * _Nonnull options;
@property (nonatomic, strong) GlobalChannel * _Null_unspecified globalChannel;
@property (nonatomic, copy) NSString * _Nullable socketId;
@property (nonatomic) enum ConnectionState connectionState;
@property (nonatomic, strong) PusherChannels * _Nonnull channels;
@property (nonatomic, strong) NSURLSession * _Nonnull URLSession;
@property (nonatomic, copy) PusherPresenceChannelMember * _Nonnull (^ _Nullable userDataFetcher)(void);
@property (nonatomic) NSInteger reconnectAttempts;
@property (nonatomic, weak) id <PusherDelegate> _Nullable delegate;
@property (nonatomic) NSTimeInterval pongResponseTimeoutInterval;
@property (nonatomic) NSTimeInterval activityTimeoutInterval;
@property (nonatomic, strong) NSTimer * _Nullable reconnectTimer;
@property (nonatomic, strong) NSTimer * _Nullable pongResponseTimeoutTimer;
@property (nonatomic, strong) NSTimer * _Nullable activityTimeoutTimer;
@property (nonatomic) BOOL intentionalDisconnect;
@property (nonatomic) BOOL socketConnected;
@property (nonatomic) BOOL connectionEstablishedMessageReceived;
/// Initializes a new PusherChannel with a given name
/// \param channelName The name of the channel
///
/// \param auth A PusherAuth value if subscription is being made to an
/// authenticated channel without using the default auth methods
///
/// \param onMemberAdded A function that will be called with information about the
/// member who has just joined the presence channel
///
/// \param onMemberRemoved A function that will be called with information about the
/// member who has just left the presence channel
///
///
/// returns:
/// A new PusherChannel instance
- (PusherChannel * _Nonnull)subscribeWithChannelName:(NSString * _Nonnull)channelName auth:(PusherAuth * _Nullable)auth onMemberAdded:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberAdded onMemberRemoved:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberRemoved onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_WARN_UNUSED_RESULT;
/// Initializes a new PusherChannel with a given name
/// \param channelName The name of the channel
///
/// \param auth A PusherAuth value if subscription is being made to an
/// authenticated channel without using the default auth methods
///
/// \param onMemberAdded A function that will be called with information about the
/// member who has just joined the presence channel
///
/// \param onMemberRemoved A function that will be called with information about the
/// member who has just left the presence channel
///
///
/// returns:
/// A new PusherChannel instance
- (PusherPresenceChannel * _Nonnull)subscribeToPresenceChannelWithChannelName:(NSString * _Nonnull)channelName auth:(PusherAuth * _Nullable)auth onMemberAdded:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberAdded onMemberRemoved:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberRemoved onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_WARN_UNUSED_RESULT;
/// Unsubscribes from a PusherChannel with a given name
/// \param channelName The name of the channel
///
- (void)unsubscribeWithChannelName:(NSString * _Nonnull)channelName;
/// Unsubscribes from all PusherChannels
- (void)unsubscribeAll;
/// Either writes a string directly to the websocket with the given event name
/// and data, or calls a client event to be sent if the event is prefixed with
/// “client”
/// \param event The name of the event
///
/// \param data The data to be stringified and sent
///
/// \param channel The name of the channel
///
- (void)sendEventWithEvent:(NSString * _Nonnull)event data:(id _Nonnull)data channel:(PusherChannel * _Nullable)channel;
/// Disconnects the websocket
- (void)disconnect;
/// Establish a websocket connection
- (void)connect;
/// Instantiate a new GlobalChannel instance for the connection
- (void)createGlobalChannel;
/// Add callback to the connection’s global channel
/// \param callback The callback to be stored
///
///
/// returns:
/// A callbackId that can be used to remove the callback from the connection
- (NSString * _Nonnull)addCallbackToGlobalChannel:(void (^ _Nonnull)(PusherEvent * _Nonnull))callback SWIFT_WARN_UNUSED_RESULT;
/// Remove the callback with id of callbackId from the connection’s global channel
/// \param callbackId The unique string representing the callback to be removed
///
- (void)removeCallbackFromGlobalChannelWithCallbackId:(NSString * _Nonnull)callbackId;
/// Remove all callbacks from the connection’s global channel
- (void)removeAllCallbacksFromGlobalChannel;
/// Set the connection state and call the stateChangeDelegate, if set
/// \param newState The new ConnectionState value
///
- (void)updateConnectionStateTo:(enum ConnectionState)newState;
/// Reset the activity timeout timer
- (void)resetActivityTimeoutTimer;
/// Clean up the activity timeout and pong response timers
- (void)cleanUpActivityAndPongResponseTimeoutTimers;
/// Handles incoming error
/// \param error The incoming error to be processed
///
- (void)handleErrorWithError:(PusherError * _Nonnull)error;
/// Handles incoming events and passes them on to be handled by the appropriate function
/// \param event The incoming event to be processed
///
- (void)handleEventWithEvent:(PusherEvent * _Nonnull)event;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface PusherConnection (SWIFT_EXTENSION(PusherSwift))
@property (nonatomic, strong) NSNumber * _Nullable OCReconnectAttemptsMax;
@property (nonatomic, strong) NSNumber * _Nullable OCMaxReconnectGapInSeconds;
@end



@class NSURLResponse;
@class NSError;

SWIFT_PROTOCOL("_TtP11PusherSwift14PusherDelegate_")
@protocol PusherDelegate
@optional
- (void)debugLogWithMessage:(NSString * _Nonnull)message;
- (void)changedConnectionStateFrom:(enum ConnectionState)old to:(enum ConnectionState)new_;
- (void)subscribedToChannelWithName:(NSString * _Nonnull)name;
- (void)failedToSubscribeToChannelWithName:(NSString * _Nonnull)name response:(NSURLResponse * _Nullable)response data:(NSString * _Nullable)data error:(NSError * _Nullable)error;
- (void)failedToDecryptEventWithEventName:(NSString * _Nonnull)eventName channelName:(NSString * _Nonnull)channelName data:(NSString * _Nullable)data;
- (void)receivedError:(PusherError * _Nonnull)error;
@end


SWIFT_CLASS("_TtC11PusherSwift11PusherError")
@interface PusherError : NSObject
/// The error message.
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface PusherError (SWIFT_EXTENSION(PusherSwift))
/// The error code as an NSNumber (for Objective-C compatibility).
@property (nonatomic, readonly, strong) NSNumber * _Nullable codeOC;
@end


SWIFT_CLASS("_TtC11PusherSwift11PusherEvent")
@interface PusherEvent : NSObject <NSCopying>
/// According to Channels protocol, there is always an event
/// https://pusher.com/docs/channels/library_auth_reference/pusher-websockets-protocol#events
/// The name of the event.
@property (nonatomic, readonly, copy) NSString * _Nonnull eventName;
/// The name of the channel that the event was triggered on.
/// Not present in events without an associated channel, e.g. “pusher:error” events relating to the connection.
@property (nonatomic, readonly, copy) NSString * _Nullable channelName;
/// The data that was passed when the event was triggered.
@property (nonatomic, readonly, copy) NSString * _Nullable data;
/// The ID of the user who triggered the event. Only present in client event on presence channels.
@property (nonatomic, readonly, copy) NSString * _Nullable userId;
/// A helper function for accessing raw properties from the websocket event. Data
/// returned by this function should not be considered stable and it is recommended
/// that you use the properties of the <code>PusherEvent</code> instance instead e.g.
/// <code>eventName</code>, <code>channelName</code> etc.
/// \param key The key of the property to be returned
///
///
/// returns:
/// The property, if present
- (id _Nullable)propertyWithKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11PusherSwift21PusherPresenceChannel")
@interface PusherPresenceChannel : PusherChannel
@property (nonatomic, copy) NSArray<PusherPresenceChannelMember *> * _Nonnull members;
@property (nonatomic, copy) void (^ _Nullable onMemberAdded)(PusherPresenceChannelMember * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onMemberRemoved)(PusherPresenceChannelMember * _Nonnull);
@property (nonatomic, copy) NSString * _Nullable myId;
/// Initializes a new PusherPresenceChannel with a given name, connection, and optional
/// member added and member removed handler functions
/// \param name The name of the channel
///
/// \param connection The connection that this channel is relevant to
///
/// \param auth A PusherAuth value if subscription is being made to an
/// authenticated channel without using the default auth methods
///
/// \param onMemberAdded A function that will be called with information about the
/// member who has just joined the presence channel
///
/// \param onMemberRemoved A function that will be called with information about the
/// member who has just left the presence channel
///
///
/// returns:
/// A new PusherPresenceChannel instance
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name connection:(PusherConnection * _Nonnull)connection auth:(PusherAuth * _Nullable)auth onMemberAdded:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberAdded onMemberRemoved:(void (^ _Nullable)(PusherPresenceChannelMember * _Nonnull))onMemberRemoved onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged OBJC_DESIGNATED_INITIALIZER;
/// Add information about the member that has just joined to the members object
/// for the presence channel and call onMemberAdded function, if provided
/// \param memberJSON A dictionary representing the member that has joined
/// the presence channel
///
- (void)addMemberWithMemberJSON:(NSDictionary<NSString *, id> * _Nonnull)memberJSON;
/// Add information about the members that are already subscribed to the presence channel to
/// the members object of the presence channel
/// \param memberHash A dictionary representing the members that were already
/// subscribed to the presence channel
///
- (void)addExistingMembersWithMemberHash:(NSDictionary<NSString *, id> * _Nonnull)memberHash;
/// Remove information about the member that has just left from the members object
/// for the presence channel and call onMemberRemoved function, if provided
/// \param memberJSON A dictionary representing the member that has left the
/// presence channel
///
- (void)removeMemberWithMemberJSON:(NSDictionary<NSString *, id> * _Nonnull)memberJSON;
/// Set the value of myId to the value of the user_id returned as part of the authorization
/// of the subscription to the channel
/// \param channelData The channel data obtained from authorization of the subscription
/// to the channel
///
- (void)setMyUserIdWithChannelData:(NSString * _Nonnull)channelData;
/// Returns the PusherPresenceChannelMember object for the given user id
/// \param userId The user id of the PusherPresenceChannelMember for whom you want
/// the PusherPresenceChannelMember object
///
///
/// returns:
/// The PusherPresenceChannelMember object for the given user id
- (PusherPresenceChannelMember * _Nullable)findMemberWithUserId:(NSString * _Nonnull)userId SWIFT_WARN_UNUSED_RESULT;
/// Returns the connected user’s PusherPresenceChannelMember object
///
/// returns:
/// The connected user’s PusherPresenceChannelMember object
- (PusherPresenceChannelMember * _Nullable)me SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name connection:(PusherConnection * _Nonnull)connection auth:(PusherAuth * _Nullable)auth onSubscriptionCountChanged:(void (^ _Nullable)(NSInteger))onSubscriptionCountChanged SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11PusherSwift27PusherPresenceChannelMember")
@interface PusherPresenceChannelMember : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull userId;
@property (nonatomic, readonly) id _Nullable userInfo;
- (nonnull instancetype)initWithUserId:(NSString * _Nonnull)userId userInfo:(id _Nullable)userInfo OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
