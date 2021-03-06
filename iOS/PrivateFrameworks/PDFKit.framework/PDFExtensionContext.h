//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <PDFKit/PDFExtensionProtocol-Protocol.h>

@class NSString, PDFExtensionViewController;

@interface PDFExtensionContext : NSExtensionContext <PDFExtensionProtocol>
{
    PDFExtensionViewController *_extensionViewController;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
@property(nonatomic) __weak PDFExtensionViewController *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
- (oneway void)hostToExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

