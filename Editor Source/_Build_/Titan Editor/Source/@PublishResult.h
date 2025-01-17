﻿#pragma once
/******************************************************************************/
/******************************************************************************/
class PublishResult : ClosableWindow {
    TextNoTest text;
    Button ok, size_stats;
    Str path;

    static void OK(PublishResult &pr);
    static void SizeStats(PublishResult &pr);

    void display(C Str &text);
};
/******************************************************************************/
/******************************************************************************/
extern PublishResult PublishRes;
/******************************************************************************/
