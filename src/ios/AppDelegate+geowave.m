#import "AppDelegate+geowave.h"
#import "Geowave.h"

@implementation AppDelegate (geowave)

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
    [Geowave applicationDidRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))handler {
    UIBackgroundFetchResult result = [Geowave applicationDidReceiveRemoteNotification:userInfo];

    handler(result);
}

@end