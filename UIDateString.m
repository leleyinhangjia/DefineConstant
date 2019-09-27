//
//  UIDateString.m
//  FlycPiano
//
//  Created by leleyinhangjia on 2018/1/23.
//  Copyright © 2018年 Flyc. All rights reserved.
//

#import "UIDateString.h"

@implementation UIDateString
#pragma mark 比较两个日期大小(时间早晚)
+ (NSInteger)compareDate:(NSString*)startDate withDate:(NSString*)endDate{
    NSLog(@"startDate:%@ endDate:%@", startDate, endDate);
    NSInteger comparisonResult;
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"YYYY-MM-dd HH:mm"];
    NSDate *date1 = [[NSDate alloc] init];
    NSDate *date2 = [[NSDate alloc] init];
    date1 = [formatter dateFromString:startDate];
    date2 = [formatter dateFromString:endDate];
    NSComparisonResult result = [date1 compare:date2];
    NSLog(@"result==%ld",(long)result);
    switch (result)
    {   //date02比date0小
        case NSOrderedAscending:
            comparisonResult = 1;
            break;
            //date02比date01大
        case NSOrderedDescending:
            comparisonResult = -1;
            break;
            //date02=date01
        case NSOrderedSame:
            comparisonResult = 0;
            break;
        default:
            NSLog(@"erorr dates %@, %@", date1, date2);
            break;
    }
    return comparisonResult;
}
+ (NSString *)dateStringWithHouseAndSecond:(NSString *)dateStr {
    /** 时间格式转换 **/
    // 时间字符串
    NSString *string = dateStr;
    // 日期格式化类
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    // 日期格式化类
    NSDateFormatter *fmt1 = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt1.dateFormat = @"HH:mm";
    // NSString * -> NSDate *
    NSDate *date = [fmt dateFromString:string];
    NSString *dateString = [fmt1 stringFromDate:date];
    
    return dateString;
}

+(NSString *)dateString:(NSString *)dateStr {
    /** 时间格式转换 **/
    // 时间字符串
    NSString *string = dateStr;
    // 日期格式化类
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    // 日期格式化类
    NSDateFormatter *fmt1 = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt1.dateFormat = @"YYYY-MM-dd EEE HH:mm";
    // NSString * -> NSDate *
    NSDate *date = [fmt dateFromString:string];
    NSString *dateString = [fmt1 stringFromDate:date];
    
    return dateString;
}

+(NSString *)dateWeekString:(NSString *)dateStr {
    /** 时间格式转换 **/
    // 时间字符串
    NSString *string = dateStr;
    // 日期格式化类
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    // 日期格式化类
    NSDateFormatter *fmt1 = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt1.dateFormat = @"EEE";
    // NSString * -> NSDate *
    NSDate *date = [fmt dateFromString:string];
    NSString *dateString = [fmt1 stringFromDate:date];
    
    return dateString;
}

+(NSString *)dateMonthAndDayString:(NSString *)dateStr {
    /** 时间格式转换 **/
    // 时间字符串
    NSString *string = dateStr;
    // 日期格式化类
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    // 日期格式化类
    NSDateFormatter *fmt1 = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt1.dateFormat = @"yyyy-MM-dd";
    // NSString * -> NSDate *
    NSDate *date = [fmt dateFromString:string];
    NSString *dateString = [fmt1 stringFromDate:date];
    
    return dateString;
}

+(NSString *)dateHoursAndMinuesString:(NSString *)dateStr {
    /** 时间格式转换 **/
    // 时间字符串
    NSString *string = dateStr;
    // 日期格式化类
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt.dateFormat = @"yyyy-MM-dd HH:mm";
    // 日期格式化类
    NSDateFormatter *fmt1 = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt1.dateFormat = @"HH:mm";
    // NSString * -> NSDate *
    NSDate *date = [fmt dateFromString:string];
    NSString *dateString = [fmt1 stringFromDate:date];
    
    return dateString;
}

/** yyyy-MM-dd HH:mm -----  MM-dd 新增 **/
+(NSString *)dateNewMonthAndDayString:(NSString *)dateStr {
    /** 时间格式转换 **/
    // 时间字符串
    NSString *string = dateStr;
    // 日期格式化类
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt.dateFormat = @"yyyy-MM-dd HH:mm";
    // 日期格式化类
    NSDateFormatter *fmt1 = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt1.dateFormat = @"MM-dd";
    // NSString * -> NSDate *
    NSDate *date = [fmt dateFromString:string];
    NSString *dateString = [fmt1 stringFromDate:date];
    
    return dateString;
}

/** yyyy-MM-dd HH:mm -----  yyyy 新增 **/
+(NSString *)dateAndYearString:(NSString *)dateStr {
    /** 时间格式转换 **/
    // 时间字符串
    NSString *string = dateStr;
    // 日期格式化类
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt.dateFormat = @"yyyy-MM-dd HH:mm";
    // 日期格式化类
    NSDateFormatter *fmt1 = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt1.dateFormat = @"MM-dd";
    // NSString * -> NSDate *
    NSDate *date = [fmt dateFromString:string];
    NSString *dateString = [fmt1 stringFromDate:date];
    
    return dateString;
}

/** yyyy-MM-dd HH:mm -----  yyyy-MM-dd 新增**/
+(NSString *)dateAndYearAndMonthAndDayString:(NSString *)dateStr {
    /** 时间格式转换 **/
    // 时间字符串
    NSString *string = dateStr;
    // 日期格式化类
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt.dateFormat = @"yyyy-MM-dd HH:mm";
    // 日期格式化类
    NSDateFormatter *fmt1 = [[NSDateFormatter alloc] init];
    // 设置日期格式(为了转换成功)
    fmt1.dateFormat = @"yyyy-MM-dd";
    // NSString * -> NSDate *
    NSDate *date = [fmt dateFromString:string];
    NSString *dateString = [fmt1 stringFromDate:date];
    return dateString;
}


//获取当前的时间
+(NSString*)getCurrentTimes {
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    
    // ----------设置你想要的格式,hh与HH的区别:分别表示12小时制,24小时制
    
    [formatter setDateFormat:@"YYYY-MM-dd"];
    
    //现在时间,你可以输出来看下是什么格式
    
    NSDate *datenow = [NSDate date];
    
    //----------将nsdate按formatter格式转成nsstring
    
    NSString *currentTimeString = [formatter stringFromDate:datenow];
    
    NSLog(@"currentTimeString =  %@",currentTimeString);
    
    return currentTimeString;
    
}

//获取当前的时间 只展示时间HH
+(NSString*)getCurrentTimesHH {
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    
    // ----------设置你想要的格式,hh与HH的区别:分别表示12小时制,24小时制
    
    [formatter setDateFormat:@"HH"];
    
    //现在时间,你可以输出来看下是什么格式
    
    NSDate *datenow = [NSDate date];
    
    //----------将nsdate按formatter格式转成nsstring
    
    NSString *currentTimeString = [formatter stringFromDate:datenow];
    
    NSLog(@"currentTimeString =  %@",currentTimeString);
    
    return currentTimeString;
    
}


//获取当前的时间
+(NSString*)getCurrentTimesYYYYMMddHHmmss {
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    
    // ----------设置你想要的格式,hh与HH的区别:分别表示12小时制,24小时制
    
    [formatter setDateFormat:@"YYYY-MM-dd HH:mm:ss"];
    
    //现在时间,你可以输出来看下是什么格式
    
    NSDate *datenow = [NSDate date];
    
    //----------将nsdate按formatter格式转成nsstring
    
    NSString *currentTimeString = [formatter stringFromDate:datenow];
    
    NSLog(@"currentTimeString =  %@",currentTimeString);
    
    return currentTimeString;
    
}

//获取当前的时间
+(NSString*)getCurrentTimesYearAndMonthAndDayAndHoursAndSecond {
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    
    // ----------设置你想要的格式,hh与HH的区别:分别表示12小时制,24小时制
    
    [formatter setDateFormat:@"YYYY-MM-dd HH:mm"];
    
    //现在时间,你可以输出来看下是什么格式
    
    NSDate *datenow = [NSDate date];
    
    //----------将nsdate按formatter格式转成nsstring
    
    NSString *currentTimeString = [formatter stringFromDate:datenow];
    
    NSLog(@"currentTimeString =  %@",currentTimeString);
    
    return currentTimeString;
    
}

/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前周几以及相应日期界面赋值
+(NSString *)obtainCurrentDateAndUpdateInterface:(NSString *)datestring{
    NSDateFormatter *formatter0 = [[NSDateFormatter alloc] init];
    [formatter0 setDateFormat:@"YYYY-MM-dd"];
    NSDate *nowDate = [NSDate date];
    nowDate = [formatter0 dateFromString:datestring];
    // 1.获得相应日期字符串值
    
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *comp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitWeekday fromDate:nowDate];
    // 获取今天是周几(1日2一3二4三5四6五7六)
    NSInteger weekDay = [comp weekday];
    // 获取今天是几号
    NSInteger day = [comp day];
    // 计算当前日期和本周的星期一和星期天相差天数
    long firstDiff,lastDiff;
    // 如果是周日
    
    firstDiff = [calendar firstWeekday] - weekDay; // 1 - 1 = 1 - (2 - 1) = 1 - 2 + 1 = 0
    NSLog(@"firstWeekDay:%ld",[calendar firstWeekday]); // 获取的是周一
    lastDiff = 7 - weekDay;  // 7 - 1 = 7 - ( 2 - 1) = 8 - 2
    
    NSLog(@"firstDiff: %ld lastDiff: %ld",firstDiff,lastDiff);
    // 在当前日期(去掉时分秒)基础上加上差的天
    NSDateComponents *firstDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往前推日期
    [firstDayComp setDay:day + firstDiff];
    // 获得相应日期
    NSDate *firstDayOfWeek = [calendar dateFromComponents:firstDayComp];
    NSDateComponents *lastDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往后推日期
    [lastDayComp setDay:day + lastDiff];
    // 获得相应日期
    NSDate *lastDayOfWeek = [calendar dateFromComponents:lastDayComp];
    // 日期格式转换对象
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    // 本周周一日期
    NSString *firstDay = [formatter stringFromDate:firstDayOfWeek];
    // 本周周日日期
    NSString *lastDay = [formatter stringFromDate:lastDayOfWeek];
    NSLog(@"firstDay:%@=======lastDay:%@",firstDay,lastDay);
    // 2.拼接得到相应字符串
    NSString *dateEndStr = [firstDay stringByAppendingFormat:@"~%@",lastDay];
    NSLog(@"dateEndStr:%@",dateEndStr);
    //self.curriHeaderView.currentWeekDateL.text = dateEndStr;
   return dateEndStr;
    
}

/**获取周数 周日-周六 (国外日历)**/
#pragma mark (周日)
+ (NSString *)obtainCurrentDateSunday:(NSString *)sundayString {
    NSDateFormatter *formatter0 = [[NSDateFormatter alloc] init];
    [formatter0 setDateFormat:@"YYYY-MM-dd"];
    NSDate *nowDate = [NSDate date];
    nowDate = [formatter0 dateFromString:sundayString];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *comp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitWeekday fromDate:nowDate];
    // 获取今天是周几(1日2一3二4三5四6五7六)
    NSInteger weekDay = [comp weekday];
    // 获取今天是几号
    NSInteger day = [comp day];
    // 计算当前日期和本周的星期一和星期天相差天数
    long firstDiff,lastDiff;
   
        firstDiff = [calendar firstWeekday] - weekDay ; // 1 - 1 = 1 - (2 - 1) = 1 - 2 + 1 = 0
        NSLog(@"sundayString:%ld",[calendar firstWeekday]); // 获取的是周一
        lastDiff = 7 - weekDay;  // 7 - 1 = 7 - ( 2 - 1) = 8 - 2
    NSLog(@"firstDiff: %ld lastDiff: %ld",firstDiff,lastDiff);
    // 在当前日期(去掉时分秒)基础上加上差的天
    NSDateComponents *firstDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往前推日期
    [firstDayComp setDay:day + firstDiff];
    // 获得相应日期
    NSDate *firstDayOfWeek = [calendar dateFromComponents:firstDayComp];
    NSDateComponents *lastDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往后推日期
    [lastDayComp setDay:day + lastDiff];
    // 获得相应日期
    NSDate *lastDayOfWeek = [calendar dateFromComponents:lastDayComp];
    // 日期格式转换对象
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    // 本周周一日期
    NSString *firstDay = [formatter stringFromDate:firstDayOfWeek];
    // 本周周日日期
    NSString *lastDay = [formatter stringFromDate:lastDayOfWeek];
    NSLog(@"firstDay:%@=======lastDay:%@",firstDay,lastDay);
    // 2.拼接得到相应字符串
    NSString *dateEndStr = [firstDay stringByAppendingFormat:@"~%@",lastDay];
    NSLog(@"dateEndStr:%@",dateEndStr);
    return  firstDay;
}


/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周一)
+ (NSString *)obtainCurrentDateMonday:(NSString *)mondayString {
    NSDateFormatter *formatter0 = [[NSDateFormatter alloc] init];
    [formatter0 setDateFormat:@"YYYY-MM-dd"];
    NSDate *nowDate = [NSDate date];
    nowDate = [formatter0 dateFromString:mondayString];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *comp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitWeekday fromDate:nowDate];
    // 获取今天是周几(1日2一3二4三5四6五7六)
    NSInteger weekDay = [comp weekday];
    // 获取今天是几号
    NSInteger day = [comp day];
    // 计算当前日期和本周的星期一和星期天相差天数
    long firstDiff,lastDiff;
        firstDiff = [calendar firstWeekday] - weekDay +1 ; // 1 - 1 = 1 - (2 - 1) = 1 - 2 + 1 = 0
        NSLog(@"firstWeekDay:%ld",[calendar firstWeekday]); // 获取的是周一
        lastDiff = 7 - weekDay;  // 7 - 1 = 7 - ( 2 - 1) = 8 - 2

    NSLog(@"firstDiff: %ld lastDiff: %ld",firstDiff,lastDiff);
    // 在当前日期(去掉时分秒)基础上加上差的天
    NSDateComponents *firstDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往前推日期
    [firstDayComp setDay:day + firstDiff];
    // 获得相应日期
    NSDate *firstDayOfWeek = [calendar dateFromComponents:firstDayComp];
    NSDateComponents *lastDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往后推日期
    [lastDayComp setDay:day + lastDiff];
    // 获得相应日期
    NSDate *lastDayOfWeek = [calendar dateFromComponents:lastDayComp];
    // 日期格式转换对象
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    // 本周周一日期
    NSString *firstDay = [formatter stringFromDate:firstDayOfWeek];

    return  firstDay;
}

/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周二)
+ (NSString *)obtainCurrentDateTuesday:(NSString *)TuesdayString {
    NSDateFormatter *formatter0 = [[NSDateFormatter alloc] init];
    [formatter0 setDateFormat:@"YYYY-MM-dd"];
    NSDate *nowDate = [NSDate date];
    nowDate = [formatter0 dateFromString:TuesdayString];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *comp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitWeekday fromDate:nowDate];
    // 获取今天是周几(1日2一3二4三5四6五7六)
    NSInteger weekDay = [comp weekday];
    // 获取今天是几号
    NSInteger day = [comp day];
    // 计算当前日期和本周的星期一和星期天相差天数
    long firstDiff,lastDiff;
    // 如果是周日
    
        firstDiff = [calendar firstWeekday] - weekDay +2 ; // 1 - 1 = 1 - (2 - 1) = 1 - 2 + 1 = 0
        NSLog(@"firstWeekDay:%ld",[calendar firstWeekday]); // 获取的是周一
        lastDiff = 7 - weekDay;  // 7 - 1 = 7 - ( 2 - 1) = 8 - 2
    
    NSLog(@"firstDiff: %ld lastDiff: %ld",firstDiff,lastDiff);
    // 在当前日期(去掉时分秒)基础上加上差的天
    NSDateComponents *firstDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往前推日期
    [firstDayComp setDay:day + firstDiff];
    // 获得相应日期
    NSDate *firstDayOfWeek = [calendar dateFromComponents:firstDayComp];
    NSDateComponents *lastDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往后推日期
    [lastDayComp setDay:day + lastDiff];
    // 获得相应日期
    NSDate *lastDayOfWeek = [calendar dateFromComponents:lastDayComp];
    // 日期格式转换对象
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    // 本周周一日期
    NSString *firstDay = [formatter stringFromDate:firstDayOfWeek];
    
    return  firstDay;
}

/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周三)
+ (NSString *)obtainCurrentDateWenday:(NSString *)WendayString {
    NSDateFormatter *formatter0 = [[NSDateFormatter alloc] init];
    [formatter0 setDateFormat:@"YYYY-MM-dd"];
    NSDate *nowDate = [NSDate date];
    nowDate = [formatter0 dateFromString:WendayString];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *comp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitWeekday fromDate:nowDate];
    // 获取今天是周几(1日2一3二4三5四6五7六)
    NSInteger weekDay = [comp weekday];
    // 获取今天是几号
    NSInteger day = [comp day];
    // 计算当前日期和本周的星期一和星期天相差天数
    long firstDiff,lastDiff;
 

        firstDiff = [calendar firstWeekday] - weekDay +3 ; // 1 - 1 = 1 - (2 - 1) = 1 - 2 + 1 = 0
        NSLog(@"firstWeekDay:%ld",[calendar firstWeekday]); // 获取的是周一
        lastDiff = 7 - weekDay;  // 7 - 1 = 7 - ( 2 - 1) = 8 - 2
    
    NSLog(@"firstDiff: %ld lastDiff: %ld",firstDiff,lastDiff);
    // 在当前日期(去掉时分秒)基础上加上差的天
    NSDateComponents *firstDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往前推日期
    [firstDayComp setDay:day + firstDiff];
    // 获得相应日期
    NSDate *firstDayOfWeek = [calendar dateFromComponents:firstDayComp];
    NSDateComponents *lastDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往后推日期
    [lastDayComp setDay:day + lastDiff];
    // 获得相应日期
    NSDate *lastDayOfWeek = [calendar dateFromComponents:lastDayComp];
    // 日期格式转换对象
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    // 本周周一日期
    NSString *firstDay = [formatter stringFromDate:firstDayOfWeek];
    
    return  firstDay;
}

/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周四)
+ (NSString *)obtainCurrentDateThursday:(NSString *)ThursdayString {
    NSDateFormatter *formatter0 = [[NSDateFormatter alloc] init];
    [formatter0 setDateFormat:@"YYYY-MM-dd"];
    NSDate *nowDate = [NSDate date];
    nowDate = [formatter0 dateFromString:ThursdayString];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *comp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitWeekday fromDate:nowDate];
    // 获取今天是周几(1日2一3二4三5四6五7六)
    NSInteger weekDay = [comp weekday];
    // 获取今天是几号
    NSInteger day = [comp day];
    // 计算当前日期和本周的星期一和星期天相差天数
    long firstDiff,lastDiff;
    // 如果是周日
   
        firstDiff = [calendar firstWeekday] - weekDay +4 ; // 1 - 1 = 1 - (2 - 1) = 1 - 2 + 1 = 0
        NSLog(@"firstWeekDay:%ld",[calendar firstWeekday]); // 获取的是周一
        lastDiff = 7 - weekDay;  // 7 - 1 = 7 - ( 2 - 1) = 8 - 2

    NSLog(@"firstDiff: %ld lastDiff: %ld",firstDiff,lastDiff);
    // 在当前日期(去掉时分秒)基础上加上差的天
    NSDateComponents *firstDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往前推日期
    [firstDayComp setDay:day + firstDiff];
    // 获得相应日期
    NSDate *firstDayOfWeek = [calendar dateFromComponents:firstDayComp];
    NSDateComponents *lastDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往后推日期
    [lastDayComp setDay:day + lastDiff];
    // 获得相应日期
    NSDate *lastDayOfWeek = [calendar dateFromComponents:lastDayComp];
    // 日期格式转换对象
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    // 本周周一日期
    NSString *firstDay = [formatter stringFromDate:firstDayOfWeek];
    
    return  firstDay;
}

/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周五)
+ (NSString *)obtainCurrentDateFriday:(NSString *)FridayString {
    NSDateFormatter *formatter0 = [[NSDateFormatter alloc] init];
    [formatter0 setDateFormat:@"YYYY-MM-dd"];
    NSDate *nowDate = [NSDate date];
    nowDate = [formatter0 dateFromString:FridayString];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *comp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitWeekday fromDate:nowDate];
    // 获取今天是周几(1日2一3二4三5四6五7六)
    NSInteger weekDay = [comp weekday];
    // 获取今天是几号
    NSInteger day = [comp day];
    // 计算当前日期和本周的星期一和星期天相差天数
    long firstDiff,lastDiff;
    // 如果是周日
  
        firstDiff = [calendar firstWeekday] - weekDay +5 ; // 1 - 1 = 1 - (2 - 1) = 1 - 2 + 1 = 0
        NSLog(@"firstWeekDay:%ld",[calendar firstWeekday]); // 获取的是周一
        lastDiff = 7 - weekDay;  // 7 - 1 = 7 - ( 2 - 1) = 8 - 2
    
    NSLog(@"firstDiff: %ld lastDiff: %ld",firstDiff,lastDiff);
    // 在当前日期(去掉时分秒)基础上加上差的天
    NSDateComponents *firstDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往前推日期
    [firstDayComp setDay:day + firstDiff];
    // 获得相应日期
    NSDate *firstDayOfWeek = [calendar dateFromComponents:firstDayComp];
    NSDateComponents *lastDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往后推日期
    [lastDayComp setDay:day + lastDiff];
    // 获得相应日期
    NSDate *lastDayOfWeek = [calendar dateFromComponents:lastDayComp];
    // 日期格式转换对象
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    // 本周周一日期
    NSString *firstDay = [formatter stringFromDate:firstDayOfWeek];
    
    return  firstDay;
}

#pragma mark 获取当前第后天日期(周六)
+ (NSString *)obtainCurrentDateSaturday: (NSString *)SaturdayString {
    NSDateFormatter *formatter0 = [[NSDateFormatter alloc] init];
    [formatter0 setDateFormat:@"YYYY-MM-dd"];
    NSDate *nowDate = [NSDate date];
    nowDate = [formatter0 dateFromString:SaturdayString];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *comp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitWeekday fromDate:nowDate];
    // 获取今天是周几(1日2一3二4三5四6五7六)
    NSInteger weekDay = [comp weekday];
    // 获取今天是几号
    NSInteger day = [comp day];
    // 计算当前日期和本周的星期一和星期天相差天数
    long firstDiff,lastDiff;
    // 如果是周日
    
        firstDiff = [calendar firstWeekday] - weekDay+6 ; // 1 - 1 = 1 - (2 - 1) = 1 - 2 + 1 = 0
        NSLog(@"firstWeekDay:%ld",[calendar firstWeekday]); // 获取的是周一
        lastDiff = 7 - weekDay;  // 7 - 1 = 7 - ( 2 - 1) = 8 - 2
    NSLog(@"firstDiff: %ld lastDiff: %ld",firstDiff,lastDiff);
    // 在当前日期(去掉时分秒)基础上加上差的天
    NSDateComponents *firstDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往前推日期
    [firstDayComp setDay:day + firstDiff];
    // 获得相应日期
    NSDate *firstDayOfWeek = [calendar dateFromComponents:firstDayComp];
    NSDateComponents *lastDayComp = [calendar components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:nowDate];
    // 往后推日期
    [lastDayComp setDay:day + lastDiff];
    // 获得相应日期
    NSDate *lastDayOfWeek = [calendar dateFromComponents:lastDayComp];
    // 日期格式转换对象
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    // 本周周一日期
    //NSString *firstDay = [formatter stringFromDate:firstDayOfWeek];
    // 本周周日日期
        NSString *lastDay = [formatter stringFromDate:lastDayOfWeek];
    return  lastDay;
}
@end
