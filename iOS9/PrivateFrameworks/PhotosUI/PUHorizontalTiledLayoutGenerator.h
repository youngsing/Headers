//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTiledLayoutGenerator.h>

__attribute__((visibility("hidden")))
@interface PUHorizontalTiledLayoutGenerator : PUTiledLayoutGenerator
{
    struct CGPoint _origin;
    double _referenceHeight;
}

@property(nonatomic) double referenceHeight; // @synthesize referenceHeight=_referenceHeight;
- (_Bool)_addSpecialSequenceBlock:(struct PUTileInfo *)arg1;
- (_Bool)_addColumnWithTiles:(struct PUTileInfo *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (void)_enumerateColumnFramesWithContiguousTiles:(struct PUTileInfo *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)_addColumnWithContiguousTiles:(struct PUTileInfo *)arg1 count:(long long)arg2;
- (_Bool)_isAtEndOfColumn;
- (_Bool)_hasLeftSuboptimalColumn;
- (_Bool)_scanNonPanoramaSequence:(struct PUTileInfo *)arg1 count:(long long)arg2;
- (_Bool)_scanSpecialSequenceColumn:(struct PUTileInfo *)arg1 count:(long long *)arg2;
- (_Bool)_scanSpecialSequenceBlock:(struct PUTileInfo *)arg1;
- (_Bool)_scanTripletWithLargeLead:(struct PUTileInfo *)arg1;
- (_Bool)_parseSpecialSubsequenceWithColumnRequired:(_Bool)arg1 columnParsed:(_Bool *)arg2;
- (_Bool)_parseSpecialSequence;
- (_Bool)_parseSpecialTileTriplet;
- (_Bool)_parseTileTriplet;
- (_Bool)_parseTilePair;
- (_Bool)_parseSingleTile;
- (double)referenceDistanceForMagneticGuidelines;
- (_Bool)parseNextTiles;
- (void)willParseTiles;

@end
