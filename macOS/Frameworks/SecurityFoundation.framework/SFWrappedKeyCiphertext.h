//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SecurityFoundation/_SFCiphertext.h>

__attribute__((visibility("hidden")))
@interface SFWrappedKeyCiphertext : _SFCiphertext
{
    id _wrappedKeyCiphertextInternal;
}

- (void).cxx_destruct;
@property(readonly) _SFCiphertext *ciphertextKey;
- (id)initWithCiphertext:(id)arg1 ciphertextKey:(id)arg2;

@end

