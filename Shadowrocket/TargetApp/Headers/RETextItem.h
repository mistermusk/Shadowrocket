//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RETableViewItem.h"

@class NSString;

@interface RETextItem : RETableViewItem
{
    _Bool _clearsOnBeginEditing;
    _Bool _enablesReturnKeyAutomatically;
    _Bool _secureTextEntry;
    NSString *_value;
    NSString *_placeholder;
    long long _clearButtonMode;
    unsigned long long _charactersLimit;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _spellCheckingType;
    long long _keyboardType;
    long long _keyboardAppearance;
    long long _returnKeyType;
    CDUnknownBlockType _onBeginEditing;
    CDUnknownBlockType _onEndEditing;
    CDUnknownBlockType _onChange;
    CDUnknownBlockType _onReturn;
    CDUnknownBlockType _onChangeCharacterInRange;
}

+ (id)itemWithTitle:(id)arg1 value:(id)arg2 placeholder:(id)arg3;
+ (id)itemWithTitle:(id)arg1 value:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType onChangeCharacterInRange; // @synthesize onChangeCharacterInRange=_onChangeCharacterInRange;
@property(copy, nonatomic) CDUnknownBlockType onReturn; // @synthesize onReturn=_onReturn;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(copy, nonatomic) CDUnknownBlockType onEndEditing; // @synthesize onEndEditing=_onEndEditing;
@property(copy, nonatomic) CDUnknownBlockType onBeginEditing; // @synthesize onBeginEditing=_onBeginEditing;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long spellCheckingType; // @synthesize spellCheckingType=_spellCheckingType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) unsigned long long charactersLimit; // @synthesize charactersLimit=_charactersLimit;
@property(nonatomic) _Bool clearsOnBeginEditing; // @synthesize clearsOnBeginEditing=_clearsOnBeginEditing;
@property(nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)errors;
- (id)initWithTitle:(id)arg1 value:(id)arg2 placeholder:(id)arg3;
- (id)initWithTitle:(id)arg1 value:(id)arg2;

@end
