/*
 * Copyright 2018 CodiLime
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

#include <QObject>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>

#include "ui/disasm/disasm.h"

namespace veles {
namespace ui {
namespace disasm {

class Row : public QWidget {
  Q_OBJECT

 public:
  explicit Row(int indent_level);

  void setEntry(const EntryChunkBegin* entry);
  void setEntry(const EntryChunkEnd* entry);
  void setEntry(const EntryOverlap* entry);
  void setEntry(const EntryField* entry);

 private:
  QLabel* address_;
  QLabel* text_;
  QLabel* comment_;

  QHBoxLayout* layout_;

  int indent_level_;
};

}  // namespace disasm
}  // namespace ui
}  // namespace veles