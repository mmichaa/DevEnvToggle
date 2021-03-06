//
//  AppDelegate.h
//  DevEnvCtrl
//
//  Created by Michael Nowak on 10.03.13.
//  Copyright (c) 2013 Michael Nowak. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Security/Authorization.h>
#import <ServiceManagement/ServiceManagement.h>

#import "AppServiceChecker.h"
#import "AppServiceData.h"
#import "AppServiceHelper.h"

@interface AppDelegate : NSObject <NSApplicationDelegate, NSMenuDelegate> {
    IBOutlet NSMenu *statusMenu;
    IBOutlet NSStatusItem *statusItem;
    IBOutlet NSImage *statusImage;
    IBOutlet NSImage *statusLightImage;

    NSMutableArray *services;
    AppServiceHelper *serviceHelperRoot;
    AppServiceHelper *serviceHelperUser;
}

- (void)initServicesAndMenu;
- (void)menuWillOpen:(NSMenu *)menu;
- (IBAction)onAllOn:(id)sender;
- (IBAction)onAllOff:(id)sender;
- (IBAction)onToggleItem:(id)sender;

- (AuthorizationRef)createAuthRef;
- (BOOL)blessHelperWithLabel:(NSString *)label withAuthRef:(AuthorizationRef)authRef error:(NSError **)error;

@property (assign) IBOutlet NSWindow *window;
/*
@property (assign) IBOutlet NSMenu *statusMenu;
@property (assign) IBOutlet NSStatusItem *statusItem;
@property (strong) IBOutlet NSImage *statusImage;
@property (strong) IBOutlet NSImage *statusLightImage;
*/

/*
@property (strong) NSMutableArray *services;
@property (assign) AppServiceHelper *serviceHelperProxy;
*/

@end
