//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLView_v2, LView;

@interface VOIPVideoRender : NSObject
{
    EAGLView_v2 *glview;
    LView *lview;
}

- (void).cxx_destruct;
- (void)addSingleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)changeFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)getGLView;
- (id)getLView;
- (id)getView;
- (id)initWithView:(id)arg1 UseELGS2:(_Bool)arg2 Layer:(id)arg3;
- (id)initWithView:(id)arg1 UseELGS2:(_Bool)arg2 UseNV12:(_Bool)arg3 IsMirrored:(_Bool)arg4 Layer:(id)arg5;
- (void)randerDefaultView:(id)arg1;
- (void)renderImage2:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage3:(char **)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)restartRender;
- (void)setDegrees:(float)arg1;
- (void)stopRender;
- (void)switchLocalView:(_Bool)arg1;
- (void)transformBackImage;
- (void)transformFrontImage;

@end
