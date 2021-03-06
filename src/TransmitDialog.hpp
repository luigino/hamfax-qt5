// hamfax -- an application for sending and receiving amateur radio facsimiles
// Copyright (C) 2001,2002
// Christof Schmitt, DH1CS <cschmitt@users.sourceforge.net>
//  
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//  
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef TRANSMITDIALOG_HPP
#define TRANSMITDIALOG_HPP

#include <qdialog.h>
#include <qlabel.h>
#include <qpushbutton.h>

class TransmitDialog : public QDialog {
	Q_OBJECT
public:
	TransmitDialog(QWidget* parent);
        void start(void);
private:
	virtual void closeEvent(QCloseEvent* close);
	virtual void reject(void);
        void showText(const QString& s);
	QLabel* status;
	QPushButton* cancel;
public slots:
	void phasing(void);
	void imageLine(int n);
	void aptStop(void);
signals:
        void cancelClicked(void);
};

#endif
