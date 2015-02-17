//
//  VPBiometricAuthenticationFacade.h
//  VPBiometricAuthenticationFacade
//
//  Created by Vladimir Popko (visput).
//

#import <Foundation/Foundation.h>

extern NSString *const kVPBiometricAuthenticationFacadeVersion;
extern NSString *const kVPBiometricsErrorDomain;

typedef enum {
    kVPBiometricsUnavailabilityErrorCode = 1000
} VPBiometricsErrorCode;

@interface VPBiometricAuthenticationFacade : NSObject

- (BOOL)isAuthenticationAvailable;

- (BOOL)isAuthenticationEnabledForFeature:(NSString *)featureName;

- (void)enableAuthenticationForFeature:(NSString *)featureName
                           succesBlock:(void(^)())successBlock
                          failureBlock:(void(^)(NSError *error))failureBlock;

- (void)disableAuthenticationForFeature:(NSString *)featureName
                             withReason:(NSString *)reason
                            succesBlock:(void(^)())successBlock
                           failureBlock:(void(^)(NSError *error))failureBlock;

- (void)authenticateForAccessToFeature:(NSString *)featureName
                            withReason:(NSString *)reason
                           succesBlock:(void(^)())successBlock
                          failureBlock:(void(^)(NSError *error))failureBlock;

@end