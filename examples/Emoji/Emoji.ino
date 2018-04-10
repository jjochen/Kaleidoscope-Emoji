/* -*- mode: c++ -*-
 * Kaleidoscope-Emoji -- Emoji Keys.
 *
 * Copyright (c) 2018 Jochen Pfeiffer
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
.* in the Software without restriction, including without limitation the rights
.* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
.* copies of the Software, and to permit persons to whom the Software is
.* furnished to do so, subject to the following conditions:
.*
.* The above copyright notice and this permission notice shall be included in all
.* copies or substantial portions of the Software.
.*
.* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
.* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
.* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
.* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
.* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
.* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
.* SOFTWARE.
 */

#include <Kaleidoscope.h>
#include <Kaleidoscope-Emoji.h>

enum { QWERTY, EMOJI }; // layers

// *INDENT-OFF*

KEYMAPS(

  [QWERTY] = KEYMAP_STACKED
  (___,          Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
   Key_PageUp,   Key_A, Key_S, Key_D, Key_F, Key_G,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(EMOJI),

   Key_NoKey,     Key_6, Key_7, Key_8,     Key_9,         Key_0,         Key_NoKey,
   Key_Enter,     Key_Y, Key_U, Key_I,     Key_O,         Key_P,         Key_Equals,
                  Key_H, Key_J, Key_K,     Key_L,         Key_Semicolon, Key_Quote,
   Key_RightAlt,  Key_N, Key_M, Key_Comma, Key_Period,    Key_Slash,     Key_Minus,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(EMOJI)
  ),

  [EMOJI] =  KEYMAP_STACKED
   (___, Key_EmojiUnicorn, ___,            ___,                 ___,             ___,               ___,
    ___, ___,              Key_EmojiWave,  Key_EmojiEyes,       Key_EmojiRocket, ___, ___,
    ___, Key_EmojiAlert,   Key_EmojiSmile, Key_EmojiThumbsDown, Key_EmojiFlower, Key_EmojiGrimace,
    ___, ___,              Key_EmojiPeach, Key_EmojiCrazy,      Key_EmojiVomit,  Key_EmojiBoom,     ___,
    ___, ___, ___, ___,
    ___,

    ___, ___,             ___,               ___,               ___,                 ___,            ___,
    ___, ___,             Key_EmojiThumbsUp, Key_EmojiThinking, ___,                 Key_EmojiParty, Key_EmojiCheck,
         ___,             Key_EmojiJoy,      Key_EmojiKiss,     Key_EmojiSunglasses, ___,            ___,
    ___, Key_EmojiTongue, Key_EmojiMad,      ___,               ___,                 ___,            ___,
    ___, ___, ___, ___,
    ___
  )

	) // KEYMAPS(

// *INDENT-ON*

void setup() {
  Kaleidoscope.use(&Emoji);
  Kaleidoscope.setup();
}

void loop() {
  Kaleidoscope.loop();
}
