#include "notationmainwindow.h"
#include "src/Notation/notationheader.h"

NotationMainWindow::NotationMainWindow(MasterTrack *master) : masterTrack(master)
{
    notationView = new NotationView(master);
    mainVLayout = new QVBoxLayout;
    header = new NotationHeader(this);
    mainVLayout->addWidget(header);
    mainVLayout->addWidget(notationView);
    setLayout(mainVLayout);

}

void NotationMainWindow::addInstrument(TrackMidi *track)
{
    notationView->AddInstrument(track);
    notationView->assignMeasureToPage();

}

void NotationMainWindow::addMeasure()
{
    notationView->AddMeasure(0);
}
