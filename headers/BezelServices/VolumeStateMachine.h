//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSound, NSString, NSTimer, VolumeState;
@protocol NSObject;

@interface VolumeStateMachine : NSObject
{
    VolumeState *_currentState;
    id <NSObject> _faceTimeProxy;
    NSSound *_beepSound;
    NSString *_beepPath;
    NSTimer *_beepTimer;
    NSDate *_beepTimeout;
    BOOL _volIncKeyDown;
    BOOL _volDecKeyDown;
    BOOL _muteKeyDown;
    BOOL _sleeping;
    BOOL _muted;
    BOOL _negateSilentPreference;
    BOOL _singleBeepWhenFinished;
    int _eventType;
    long long _graphicType;
}

+ (id)alloc;
+ (void)stopSingleton;
+ (void)releaseSingleton;
+ (id)getSingleton;
@property BOOL singleBeepWhenFinished; // @synthesize singleBeepWhenFinished=_singleBeepWhenFinished;
@property long long graphicType; // @synthesize graphicType=_graphicType;
@property int eventType; // @synthesize eventType=_eventType;
@property BOOL negateSilentPreference; // @synthesize negateSilentPreference=_negateSilentPreference;
@property BOOL sleeping; // @synthesize sleeping=_sleeping;
@property BOOL muteKeyDown; // @synthesize muteKeyDown=_muteKeyDown;
@property BOOL volIncKeyDown; // @synthesize volIncKeyDown=_volIncKeyDown;
@property BOOL volDecKeyDown; // @synthesize volDecKeyDown=_volDecKeyDown;
@property(retain) NSTimer *beepTimer; // @synthesize beepTimer=_beepTimer;
@property(retain) NSDate *beepTimeout; // @synthesize beepTimeout=_beepTimeout;
@property(retain) id <NSObject> faceTimeProxy; // @synthesize faceTimeProxy=_faceTimeProxy;
@property(retain) VolumeState *currentState; // @synthesize currentState=_currentState;
- (void)changeState:(int)arg1 smallIncrements:(BOOL)arg2;
- (void)handleKeyEvent:(int)arg1 shift:(BOOL)arg2 control:(BOOL)arg3 option:(BOOL)arg4 command:(BOOL)arg5;
- (void)handleSleepEvent:(BOOL)arg1;
- (void)handleFaceTimeEvent:(BOOL)arg1 faceTimeProxy:(id)arg2;
- (void)muteFaceTimeCall;
- (void)powerChanged:(id)arg1;
- (void)displaySoundPrefs;
- (void)displayOSD;
- (void)toggleMute;
@property BOOL muted;
- (void)changeVolumeBy:(int)arg1 type:(int)arg2;
- (void)stopBeeps;
- (void)startRepeatedBeeps;
- (void)startOneBeep;
- (void)playOneBeep:(id)arg1;
@property(retain) NSSound *beepSound; // @synthesize beepSound=_beepSound;
@property(readonly) NSString *beepPath; // @synthesize beepPath=_beepPath;
- (void)dealloc;
- (id)init;

@end
