#ifndef PLUGINEDITORCONTAINER_H
#define PLUGINEDITORCONTAINER_H

class TrackWidget;
class PluginTrackView;
class Vst2AudioPlugin;

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QScrollArea>
#include <src/folderview.h>
#include "src/mastertrack.h"
class PluginEditorContainer : public QFrame
{
    Q_OBJECT
public:
    PluginEditorContainer(FolderViewAbstractModel *model, MasterTrack *masterTrack);
    PluginTrackView* addTrack(TrackWidget *track);
    void switchPluginViews(PluginTrackView *pluginTrack);
    void pluginTrackClickedOn();
    PluginTrackView *lastPluginTrack = NULL;
    MasterTrack *masterTrack;
private:
    QVBoxLayout *vLayout;
    QHBoxLayout *hlayout;
    QHBoxLayout *hTopLayout;
    QHBoxLayout *hBotttomLayout;
    QScrollArea *trackScrollArea;
    FolderView  *folderView;
};

#endif // PLUGINEDITORCONTAINER_H
