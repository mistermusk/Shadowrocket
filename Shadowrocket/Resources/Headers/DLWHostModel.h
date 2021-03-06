//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString;

@interface DLWHostModel : NSManagedObject
{
}

+ (id)createWithConfig:(id)arg1;
+ (id)findOrCreateWithConfig:(id)arg1;
+ (id)subscribes;
+ (id)groupAll;
+ (id)sortedAll;
+ (id)fetchRequest;
- (id)toDictionary;
- (_Bool)save;
- (void)delete;
- (id)defaultId;
- (id)UUID;
- (id)localizedDescription;
- (_Bool)isSelected;
- (id)subscribeServers;

// Remaining properties
@property(copy, nonatomic) NSDate *created; // @dynamic created;
@property(copy, nonatomic) NSString *data; // @dynamic data;
@property(copy, nonatomic) NSString *file; // @dynamic file;
@property(copy, nonatomic) NSString *flag; // @dynamic flag;
@property(copy, nonatomic) NSString *host; // @dynamic host;
@property(copy, nonatomic) NSString *method; // @dynamic method;
@property(copy, nonatomic) NSString *obfs; // @dynamic obfs;
@property(copy, nonatomic) NSString *obfsParam; // @dynamic obfsParam;
@property(copy, nonatomic) NSNumber *ota; // @dynamic ota;
@property(copy, nonatomic) NSString *password; // @dynamic password;
@property(copy, nonatomic) NSString *port; // @dynamic port;
@property(copy, nonatomic) NSString *proto; // @dynamic proto;
@property(copy, nonatomic) NSString *protoParam; // @dynamic protoParam;
@property(copy, nonatomic) NSNumber *selected; // @dynamic selected;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSDate *updated; // @dynamic updated;
@property(copy, nonatomic) NSString *user; // @dynamic user;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;
@property(copy, nonatomic) NSNumber *weight; // @dynamic weight;

@end

