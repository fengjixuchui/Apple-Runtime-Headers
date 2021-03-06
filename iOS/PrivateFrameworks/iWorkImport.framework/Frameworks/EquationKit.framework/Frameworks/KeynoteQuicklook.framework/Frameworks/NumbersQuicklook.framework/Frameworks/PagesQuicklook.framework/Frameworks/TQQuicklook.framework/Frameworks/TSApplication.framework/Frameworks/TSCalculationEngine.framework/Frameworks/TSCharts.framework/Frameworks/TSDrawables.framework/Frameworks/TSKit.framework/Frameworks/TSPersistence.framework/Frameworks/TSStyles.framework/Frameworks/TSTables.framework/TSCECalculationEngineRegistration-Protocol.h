//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSTables/TSKModel-Protocol.h>

@class TSCECalculationEngine, TSPObject;
@protocol TSCECalculationEngineRegistration, TSCEFormulaOwning;

@protocol TSCECalculationEngineRegistration <TSKModel>
- (id <TSCEFormulaOwning>)formulaOwner;
- (TSPObject<TSCECalculationEngineRegistration> *)objectToArchiveInDependencyTracker;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (_Bool)registerLast;
- (void)unregisterFromCalcEngine:(TSCECalculationEngine *)arg1;
- (void)registerWithCalcEngineForDocumentLoad:(TSCECalculationEngine *)arg1;
@end

