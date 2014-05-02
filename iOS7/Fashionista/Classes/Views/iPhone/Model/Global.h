//
//  global.h
//  Pixcell8
//
//  Created by  on 14-2-8.
//  Copyright (c) 2014年 . All rights reserved.
//

#ifndef Pixcell8_Global_h
#define Pixcell8_Global_h

#define API_USER_LOGIN @"http://pixcell8.com/api/v1/login"
#define API_USER_REGISTER @"http://pixcell8.com/api/v1/register"
#define API_USER_PASSWORD @"http://pixcell8.com/api/v1/user/password/reset?email=%@"

#define API_USER_PROFILE_UPDATE @"http://pixcell8.com/api/v1/profile/update/"

#define API_IMAGE_LATEST @"http://pixcell8.com/api/v1/image/latest/"
#define API_IMAGE_SEARCH @"http://pixcell8.com/api/v1/image/search/"
#define API_IMAGE_UPDATE_INFO @"http://pixcell8.com/api/v1/image/edit/"
#define API_IMAGE_UPLOAD @"http://pixcell8.com/api/v1/image/upload"
#define API_IMAGE_UPLOAD2 @"http://pixcell8.com/api/v1/image/info"

#define API_IMAGE_USER @"http://pixcell8.com/api/v1/image/%d/%d/user/%d"
#define API_IMAGE_USER_SALES @"http://pixcell8.com/api/v1/sales/%d/%d/user/%d"

#define API_IMAGE_USER_SALES_BYMONTH @"http://pixcell8.com/api/v1/sales/month/%d?month=%d&year=%d"

#define API_IMAGE_USER_PURCHASE @"http://pixcell8.com/api/v1/purchase/user/"
#define API_IMAGE_PROFILE_UPLOAD @"http://pixcell8.com/api/v1/profile/picture/upload"

#define URL_IMAGE_PATH @"http://pixcell8.com/uploads/media/user/images/"
#define URL_IMAGE_PROFILE_PATH @"http://pixcell8.com/uploads/media/user/profile/"

#define FB_PROFILE_ICON @"http://graph.facebook.com/%@/picture?type=large"

#endif


// Install AFNetworking
// 1. Drag it to your project and use group reference - xcode bugs for folder copy / no automatically reference
// 2. Added necessary frameworks and import them in .pch
// 3. Don't forget Security.framework



