//
//  Auth.h
//  Pixcell8
//
//  Created by  ()
//  Copyright (c) 2013-2014 
//

//  DB tables - users - id, useranme, password, token, status, login date, logout date, counts

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
#import "Model.h"
#import "Global.h"

@class LoginController;
@class RegisterController;

@interface User : Model

@property (atomic, retain) id delegate;

@property (atomic, assign) NSInteger userId;
@property (atomic, retain) NSString *username;
@property (atomic, retain) NSString *description;

@property (atomic, retain) NSString *fullname;
@property (atomic, retain) NSString *password;
@property (atomic, retain) NSString *email;
@property (atomic, retain) NSString *birthday;
@property (atomic, retain) NSString *paypal;

@property (atomic, retain) NSString *profileIcon;
@property (atomic, retain) NSString *profileIconUrl;
@property (atomic, retain) UIImage *imageIcon;

@property (atomic, retain) NSString *city;
@property (atomic, retain) NSString *state;
@property (atomic, retain) NSString *country;
@property (atomic, retain) NSString *address;
@property (atomic, retain) NSString *postcode;
@property (atomic, retain) NSString *phone;

@property (atomic, retain) NSString *token;

@property (atomic, assign) NSInteger returnCode;
@property (atomic, retain) NSString *errorMessage;

+ (id)getInstance;
- (BOOL)signin:(NSString *)username Password:(NSString *)password;
- (BOOL)signup:(NSString *)username Email: (NSString *)email Password:(NSString *)password;
- (BOOL)forget;

- (BOOL)updateProfile:(NSDictionary *)values;

- (BOOL)fetchByToken:(NSString *)token;
- (BOOL)add;
- (BOOL)remove;
- (BOOL)exits;

- (BOOL)logout;

@end
