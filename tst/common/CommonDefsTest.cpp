#include "gtest/gtest.h"

#include "src/common/include/com/amazonaws/kinesis/video/common/CommonDefs.h"

TEST(CommonDefsTest, SizeTMatches)
{
    EXPECT_EQ(SIZEOF(size_t), SIZEOF(SIZE_T));
}

TEST(CommonDefsTest, UINT32Matches)
{
    EXPECT_EQ(SIZEOF(UINT32), 4);
}
