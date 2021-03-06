#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QWidget>
#include <QGroupBox>
#include <QDialog>
#include <QStackedWidget>
#include <QListWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QAction>
#include <QStringListModel>
#include <QDialogButtonBox>
#include <QDebug>
#include <QFrame>
#include <QComboBox>
#include <QLabel>
#include <QSettings>
#include <src/common.h>
#include <QSlider>
#include <src/audioengine.h>

class SettingsDialog : public QDialog
{
    Q_OBJECT
public:
   explicit SettingsDialog(AudioEngine *audioEngine, QWidget *parent = 0);
private:
    void accept();
    void reject();

    QListWidget      *list_widget;
    QStackedWidget   *stacked_widget;
    QHBoxLayout      *h_layout;
    QAction          *midi_action;
    QDialogButtonBox *button_box;
    QFrame           *midi_frame;
    QFrame           *audio_frame;
    QSlider          *block_size_slider;
    QLabel           *block_size_label;
    AudioEngine      *audio_engine;
    QListWidget      *plugin_list_widget;
    QGroupBox        *plugin_group_box;
private slots:
        void listWidgetClicked();
        void blockSizeSliderChanged(int value);
        void addPluginFolder();
        void removePluginFolder();

};
    double getLatency(int sampleSize);
#endif // SETTINGSDIALOG_H
