//
//  TIFFFieldTagType.h
//  tiff-ios
//
//  Created by Brian Osborn on 1/4/17.
//  Copyright © 2017 NGA. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Field tag type enumeration
 */
enum TIFFFieldTagType{
    TIFF_TAG_ARTIST,
    TIFF_TAG_BITS_PER_SAMPLE,
    TIFF_TAG_CELL_LENGTH,
    TIFF_TAG_CELL_WIDTH,
    TIFF_TAG_COLOR_MAP,
    TIFF_TAG_COMPRESSION,
    TIFF_TAG_COPYRIGHT,
    TIFF_TAG_DATE_TIME,
    TIFF_TAG_EXTRA_SAMPLES,
    TIFF_TAG_FILL_ORDER,
    TIFF_TAG_FREE_BYTE_COUNTS,
    TIFF_TAG_FREE_OFFSETS,
    TIFF_TAG_GRAY_RESPONSE_CURVE,
    TIFF_TAG_GRAY_RESPONSE_UNIT,
    TIFF_TAG_HOST_COMPUTER,
    TIFF_TAG_IMAGE_DESCRIPTION,
    TIFF_TAG_IMAGE_LENGTH,
    TIFF_TAG_IMAGE_WIDTH,
    TIFF_TAG_MAKE,
    TIFF_TAG_MAX_SAMPLE_VALUE,
    TIFF_TAG_MIN_SAMPLE_VALUE,
    TIFF_TAG_MODEL,
    TIFF_TAG_NEW_SUBFILE_TYPE,
    TIFF_TAG_ORIENTATION,
    TIFF_TAG_PHOTOMETRIC_INTERPRETATION,
    TIFF_TAG_PLANAR_CONFIGURATION,
    TIFF_TAG_RESOLUTION_UNIT,
    TIFF_TAG_ROWS_PER_STRIP,
    TIFF_TAG_SAMPLES_PER_PIXEL,
    TIFF_TAG_SOFTWARE,
    TIFF_TAG_STRIP_BYTE_COUNTS,
    TIFF_TAG_STRIP_OFFSETS,
    TIFF_TAG_SUBFILE_TYPE,
    TIFF_TAG_THRESHOLDING,
    TIFF_TAG_X_RESOLUTION,
    TIFF_TAG_Y_RESOLUTION,
    TIFF_TAG_BAD_FAX_LINES,
    TIFF_TAG_CLEAN_FAX_DATA,
    TIFF_TAG_CLIP_PATH,
    TIFF_TAG_CONSECUTIVE_BAD_FAX_LINES,
    TIFF_TAG_DECODE,
    TIFF_TAG_DEFAULT_IMAGE_COLOR,
    TIFF_TAG_DOCUMENT_NAME,
    TIFF_TAG_DOT_RANGE,
    TIFF_TAG_HALFTONE_HINTS,
    TIFF_TAG_INDEXED,
    TIFF_TAG_JPEG_TABLES,
    TIFF_TAG_PAGE_NAME,
    TIFF_TAG_PAGE_NUMBER,
    TIFF_TAG_PREDICTOR,
    TIFF_TAG_PRIMARY_CHROMATICITIES,
    TIFF_TAG_REFERENCE_BLACK_WHITE,
    TIFF_TAG_SAMPLE_FORMAT,
    TIFF_TAG_S_MIN_SAMPLE_VALUE,
    TIFF_TAG_S_MAX_SAMPLE_VALUE,
    TIFF_TAG_STRIP_ROW_COUNTS,
    TIFF_TAG_SUB_IFDS,
    TIFF_TAG_T4_OPTIONS,
    TIFF_TAG_T6_OPTIONS,
    TIFF_TAG_TILE_BYTE_COUNTS,
    TIFF_TAG_TILE_LENGTH,
    TIFF_TAG_TILE_OFFSETS,
    TIFF_TAG_TILE_WIDTH,
    TIFF_TAG_TRANSFER_FUNCTION,
    TIFF_TAG_WHITE_POINT,
    TIFF_TAG_X_CLIP_PATH_UNITS,
    TIFF_TAG_X_POSITION,
    TIFF_TAG_Y_CB_CR_COEFFICIENTS,
    TIFF_TAG_Y_CB_CR_POSITIONING,
    TIFF_TAG_Y_CB_CR_SUB_SAMPLING,
    TIFF_TAG_Y_CLIP_PATH_UNITS,
    TIFF_TAG_Y_POSITION,
    TIFF_TAG_APERTURE_VALUE,
    TIFF_TAG_COLOR_SPACE,
    TIFF_TAG_DATE_TIME_DIGITIZED,
    TIFF_TAG_DATE_TIME_ORIGINAL,
    TIFF_TAG_EXIF_IFD,
    TIFF_TAG_EXIF_VERSION,
    TIFF_TAG_EXPOSURE_TIME,
    TIFF_TAG_FILE_SOURCE,
    TIFF_TAG_FLASH,
    TIFF_TAG_FLASHPIX_VERSION,
    TIFF_TAG_F_NUMBER,
    TIFF_TAG_IMAGE_UNIQUE_ID,
    TIFF_TAG_LIGHT_SOURCE,
    TIFF_TAG_MAKER_NOTE,
    TIFF_TAG_SHUTTER_SPEED_VALUE,
    TIFF_TAG_USER_COMMENT,
    TIFF_TAG_IPTC,
    TIFF_TAG_ICC_PROFILE,
    TIFF_TAG_XMP,
    TIFF_TAG_GDAL_METADATA,
    TIFF_TAG_GDAL_NODATA,
    TIFF_TAG_PHOTOSHOP,
    TIFF_TAG_MODEL_PIXEL_SCALE,
    TIFF_TAG_MODEL_TIEPOINT,
    TIFF_TAG_MODEL_TRANSFORMATION,
    TIFF_TAG_GEO_KEY_DIRECTORY,
    TIFF_TAG_GEO_DOUBLE_PARAMS,
    TIFF_TAG_GEO_ASCII_PARAMS
};

/**
 * Field Tag Types
 */
@interface TIFFFieldTagTypes : NSObject

/**
 * Get the tag id
 *
 * @param fieldTagType field tag type
 *
 * @return tag id
 */
+(int) tagId: (enum TIFFFieldTagType) fieldTagType;

/**
 * Is this field an array type
 *
 * @param fieldTagType field tag type
 *
 * @return true if array type
 */
+(int) isArray: (enum TIFFFieldTagType) fieldTagType;

/**
 * Get a field tag type by id
 *
 * @param tagId
 *            tag id
 *
 * @return field tag type
 */
+(enum TIFFFieldTagType) typeByTagId: (int) tagId;

@end
