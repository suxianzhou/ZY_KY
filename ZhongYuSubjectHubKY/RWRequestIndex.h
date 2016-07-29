//
//  RWRequestIndex.h
//  ZhongYuSubjectHubKY
//
//  Created by zhongyu on 16/6/21.
//  Copyright © 2016年 RyeWhiskey. All rights reserved.
//

#ifndef RWRequestIndex_h
#define RWRequestIndex_h

#define UMengCommunityAppkey @"5721b71de0f55a79f0002039"
#define UMengCommunityAppSecret @"16e3187d39e29acf9f9a299df47e7bfb"

#define MOB_CLICK @"5721b71de0f55a79f0002039"

#define NAV_TITLE @"考研资讯"

#define MAIN_INDEX [NSURL URLWithString:@"http://kaoyan.zhongyuedu.com/mobile/list.php?fid=66"]
//>> 资讯
#define SERVERS_INDEX @"http://www.zhongyuedu.com/api/tk_ky_examtype.php"
//>> 题库目录
#define YY_INDEX @"http://api.zhongyuedu.com/tik/ky/yy_ky_new_list.php"
//>> 预约列表
#define RECOMMEND @"http://www.zhongyuedu.com/api/tuijian.php"
//>> 推荐列表
#define UPDATE_USERNAME @"http://www.zhongyuedu.com/api/yy_ky_post.php"
//>> 上传
#define EXPERIENCE_TIMES_URL @"http://api.zhongyuedu.com/tik/ky/ky_limit.php"
//>> 天王盖地虎
#define RECEIVE_PUSH @"http://www.zhongyuedu.com/api/ky_url.php"
//>> push
#define LOGIN_URL @"http://api.zhongyuedu.com/tik/ky/login.php"
//>> 登录
#define REGISTER_URL @"http://api.zhongyuedu.com/tik/ky/tk_ky_register.php"
//>> 注册
#define REPLACE_PASSWORD_URL @"http://api.zhongyuedu.com/tik/ky/ky_change_pwd.php"
//>> 重置密码
#define ABOUT_US @"http://www.zhongyuedu.com/api/tk_aboutUs.htm"
//>> 关于我们
#define README @"http://www.zhongyuedu.com/app/tk_ky/tk_ios_usage.htm"
//>> 使用说明
#define VERIFICATION_PHONENUMBER @"http://api.zhongyuedu.com/comm/code.php"

#endif /* RWRequestIndex_h */
