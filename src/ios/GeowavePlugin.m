#import "GeowavePlugin.h"

@implementation GeowavePlugin

- (void)initWithAppID:(CDVInvokedUrlCommand *)command {
    NSMutableDictionary *options = [command.arguments objectAtIndex:0];

    int appID = [[options objectForKey:@"appID"] intValue];

    [Geowave initWithAppID:appID];
    
    CDVPluginResult *result = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK];
    
    [self.commandDelegate sendPluginResult:result callbackId:command.callbackId];
}

- (void)requestLocationAuthorization:(CDVInvokedUrlCommand *)command {
    [Geowave requestLocationAuthorization];

    CDVPluginResult *result = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK];

    [self.commandDelegate sendPluginResult:result callbackId:command.callbackId];
}

- (void)requestNotificationsAuthorization:(CDVInvokedUrlCommand *)command {
    [Geowave requestNotificationsAuthorization];

    CDVPluginResult *result = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK];

    [self.commandDelegate sendPluginResult:result callbackId:command.callbackId];
}

@end