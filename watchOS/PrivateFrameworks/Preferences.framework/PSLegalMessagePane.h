//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

#import <Preferences/UIWebViewDelegate-Protocol.h>

@class NSString, UIWebView;

@interface PSLegalMessagePane : PSEditingPane <UIWebViewDelegate>
{
    UIWebView *_webView;
}

- (void).cxx_destruct;
- (void)layoutInsetContent:(struct CGRect)arg1;
- (id)scrollViewToBeInsetted;
- (void)dealloc;
- (void)viewDidBecomeVisible;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (id)htmlFileLocation;
- (id)markupString;
- (_Bool)handlesDoneButton;
- (_Bool)shouldInsetContent;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

