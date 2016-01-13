#import <Cordova/CDV.h>
#import "Geowave.h"

@interface GeowavePlugin : CDVPlugin

- (void)initWithAppID:(CDVInvokedUrlCommand *)command;

- (void)requestLocationAuthorization:(CDVInvokedUrlCommand *)command;

- (void)requestNotificationsAuthorization:(CDVInvokedUrlCommand *)command;

@end