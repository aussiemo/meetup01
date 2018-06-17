#include <gtest/gtest.h>

#include <iostream>

enum class Places {
    ZeaBar,
    RoomWithBeamer
};

struct Meetup {
    Places getPlace() const { return Places::ZeaBar; }
};

std::ostream &operator<<(std::ostream &os, const Places &place) {
    switch (place) {
        case Places::ZeaBar:
            return os << "ZeaBar";
            break;
        case Places::RoomWithBeamer:
            return os << "RoomWithBeamer";
            break;
    }
}

TEST(Meetup, DoesNotMeetAtZeaBar){
    Meetup meetup;
    EXPECT_TRUE(meetup.getPlace() != Places::ZeaBar);
    EXPECT_NE(meetup.getPlace(), Places::ZeaBar);
}