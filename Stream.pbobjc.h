// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stream.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class PLASMAEventType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - PLASMAStreamRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface PLASMAStreamRoot : GPBRootObject
@end

#pragma mark - PLASMARequest

typedef GPB_ENUM(PLASMARequest_FieldNumber) {
  PLASMARequest_FieldNumber_EventsArray = 1,
};

@interface PLASMARequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PLASMAEventType*> *eventsArray;
/** The number of items in @c eventsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger eventsArray_Count;

@end

#pragma mark - PLASMAEventType

typedef GPB_ENUM(PLASMAEventType_FieldNumber) {
  PLASMAEventType_FieldNumber_Type = 1,
};

@interface PLASMAEventType : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

@end

#pragma mark - PLASMAPayload

typedef GPB_ENUM(PLASMAPayload_FieldNumber) {
  PLASMAPayload_FieldNumber_EventType = 1,
  PLASMAPayload_FieldNumber_Data_p = 2,
};

@interface PLASMAPayload : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) PLASMAEventType *eventType;
/** Test to see if @c eventType has been set. */
@property(nonatomic, readwrite) BOOL hasEventType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *data_p;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
