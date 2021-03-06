///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMMembersDeleteProfilePhotoError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MembersDeleteProfilePhotoError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersDeleteProfilePhotoError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMMembersDeleteProfilePhotoErrorTag` enum type represents the
/// possible tag states with which the `DBTEAMMembersDeleteProfilePhotoError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMMembersDeleteProfilePhotoErrorTag){
    /// No matching user found. The provided team_member_id, email, or
    /// external_id does not exist on this team.
    DBTEAMMembersDeleteProfilePhotoErrorUserNotFound,

    /// The user is not a member of the team.
    DBTEAMMembersDeleteProfilePhotoErrorUserNotInTeam,

    /// Modifying deleted users is not allowed.
    DBTEAMMembersDeleteProfilePhotoErrorSetProfileDisallowed,

    /// (no description).
    DBTEAMMembersDeleteProfilePhotoErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMMembersDeleteProfilePhotoErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_not_found".
///
/// Description of the "user_not_found" tag state: No matching user found. The
/// provided team_member_id, email, or external_id does not exist on this team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotFound;

///
/// Initializes union class with tag state of "user_not_in_team".
///
/// Description of the "user_not_in_team" tag state: The user is not a member of
/// the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotInTeam;

///
/// Initializes union class with tag state of "set_profile_disallowed".
///
/// Description of the "set_profile_disallowed" tag state: Modifying deleted
/// users is not allowed.
///
/// @return An initialized instance.
///
- (instancetype)initWithSetProfileDisallowed;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user_not_found".
///
/// @return Whether the union's current tag state has value "user_not_found".
///
- (BOOL)isUserNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "user_not_in_team".
///
/// @return Whether the union's current tag state has value "user_not_in_team".
///
- (BOOL)isUserNotInTeam;

///
/// Retrieves whether the union's current tag state has value
/// "set_profile_disallowed".
///
/// @return Whether the union's current tag state has value
/// "set_profile_disallowed".
///
- (BOOL)isSetProfileDisallowed;

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
/// The serialization class for the `DBTEAMMembersDeleteProfilePhotoError`
/// union.
///
@interface DBTEAMMembersDeleteProfilePhotoErrorSerializer : NSObject

///
/// Serializes `DBTEAMMembersDeleteProfilePhotoError` instances.
///
/// @param instance An instance of the `DBTEAMMembersDeleteProfilePhotoError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersDeleteProfilePhotoError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMMembersDeleteProfilePhotoError *)instance;

///
/// Deserializes `DBTEAMMembersDeleteProfilePhotoError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersDeleteProfilePhotoError` API object.
///
/// @return An instantiation of the `DBTEAMMembersDeleteProfilePhotoError`
/// object.
///
+ (DBTEAMMembersDeleteProfilePhotoError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
