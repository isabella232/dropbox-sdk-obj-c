///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMPOLICIESSuggestMembersPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SuggestMembersPolicy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMPOLICIESSuggestMembersPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMPOLICIESSuggestMembersPolicyTag` enum type represents the
/// possible tag states with which the `DBTEAMPOLICIESSuggestMembersPolicy`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMPOLICIESSuggestMembersPolicyTag){
    /// Suggest members is disabled.
    DBTEAMPOLICIESSuggestMembersPolicyDisabled,

    /// Suggest members is enabled.
    DBTEAMPOLICIESSuggestMembersPolicyEnabled,

    /// (no description).
    DBTEAMPOLICIESSuggestMembersPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMPOLICIESSuggestMembersPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disabled".
///
/// Description of the "disabled" tag state: Suggest members is disabled.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabled;

///
/// Initializes union class with tag state of "enabled".
///
/// Description of the "enabled" tag state: Suggest members is enabled.
///
/// @return An initialized instance.
///
- (instancetype)initWithEnabled;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "disabled".
///
/// @return Whether the union's current tag state has value "disabled".
///
- (BOOL)isDisabled;

///
/// Retrieves whether the union's current tag state has value "enabled".
///
/// @return Whether the union's current tag state has value "enabled".
///
- (BOOL)isEnabled;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMPOLICIESSuggestMembersPolicy` union.
///
@interface DBTEAMPOLICIESSuggestMembersPolicySerializer : NSObject

///
/// Serializes `DBTEAMPOLICIESSuggestMembersPolicy` instances.
///
/// @param instance An instance of the `DBTEAMPOLICIESSuggestMembersPolicy` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESSuggestMembersPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMPOLICIESSuggestMembersPolicy *)instance;

///
/// Deserializes `DBTEAMPOLICIESSuggestMembersPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESSuggestMembersPolicy` API object.
///
/// @return An instantiation of the `DBTEAMPOLICIESSuggestMembersPolicy` object.
///
+ (DBTEAMPOLICIESSuggestMembersPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
