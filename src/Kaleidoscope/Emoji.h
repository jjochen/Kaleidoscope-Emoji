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

#pragma once

#include <Kaleidoscope.h>
#include <Kaleidoscope-Ranges.h>

enum {
  EMOJI_FIRST = kaleidoscope::ranges::KALEIDOSCOPE_SAFE_START,
  EMOJI_ALERT = EMOJI_FIRST, // ⚠️ (0x26A0, 0xFE0F)
  EMOJI_BOOM, // 💥 (0x1F4A5)
  EMOJI_CHECK, // ✅ (0x2705)
  EMOJI_CRAZY, // 🤪 (0x1F92A)
  EMOJI_EYES, // 😳 (0x1F633)
  EMOJI_FLOWER, // 🌻 (0x1F33B)
  EMOJI_GRIMACE, // 😬 (0x1F62C)
  EMOJI_JOY, // 😂 (0x1F602)
  EMOJI_KISS, // 😘 (0x1F618)
  EMOJI_MAD, // 😤 (0x1F624)
  EMOJI_PARTY, // 🎉 (0x1F389)
  EMOJI_PEACH, // 🍑 (0x1F351)
  EMOJI_PRESENT, // 🎁 (0x1F381)
  EMOJI_ROCKET, // 🚀 (0x1F680)
  EMOJI_SMILE, // 😊 (0x1F60A)
  EMOJI_SUNGLASSES, // 😎 (0x1F60E)
  EMOJI_THINKING, // 🤔 (0x1F914)
  EMOJI_THUMBSDOWN, // 👎 (0x1F44E)
  EMOJI_THUMBSUP, // 👍 (0x1F44D)
  EMOJI_TONGUE, // 😜 (0x1F61C)
  EMOJI_UNICORN, // 🦄 (0x1F984)
  EMOJI_VOMIT, // 🤮 (0x1F92E)
  EMOJI_WAVE, // 👋 (0x1F44B)
  EMOJI_LAST = EMOJI_WAVE
};


#define Key_EmojiAlert (Key){.raw = EMOJI_ALERT}
#define Key_EmojiBoom (Key){.raw = EMOJI_BOOM}
#define Key_EmojiCheck (Key){.raw = EMOJI_CHECK}
#define Key_EmojiCrazy (Key){.raw = EMOJI_CRAZY}
#define Key_EmojiEyes (Key){.raw = EMOJI_EYES}
#define Key_EmojiFlower (Key){.raw = EMOJI_FLOWER}
#define Key_EmojiGrimace (Key){.raw = EMOJI_GRIMACE}
#define Key_EmojiJoy (Key){.raw = EMOJI_JOY}
#define Key_EmojiKiss (Key){.raw = EMOJI_KISS}
#define Key_EmojiMad (Key){.raw = EMOJI_MAD}
#define Key_EmojiParty (Key){.raw = EMOJI_PARTY}
#define Key_EmojiPeach (Key){.raw = EMOJI_PEACH}
#define Key_EmojiPresent (Key){.raw = EMOJI_PRESENT}
#define Key_EmojiRocket (Key){.raw = EMOJI_ROCKET}
#define Key_EmojiSmile (Key){.raw = EMOJI_SMILE}
#define Key_EmojiSunglasses (Key){.raw = EMOJI_SUNGLASSES}
#define Key_EmojiThinking (Key){.raw = EMOJI_THINKING}
#define Key_EmojiThumbsDown (Key){.raw = EMOJI_THUMBSDOWN}
#define Key_EmojiThumbsUp (Key){.raw = EMOJI_THUMBSUP}
#define Key_EmojiTongue (Key){.raw = EMOJI_TONGUE}
#define Key_EmojiUnicorn (Key){.raw = EMOJI_UNICORN}
#define Key_EmojiVomit (Key){.raw = EMOJI_VOMIT}
#define Key_EmojiWave (Key){.raw = EMOJI_WAVE}


namespace kaleidoscope {

class Emoji : public KaleidoscopePlugin {
 public:
  Emoji(void);

  void begin(void) final;

 private:
  static Key eventHandlerHook(Key mapped_key, byte row, byte col, uint8_t key_state);
}
}

extern kaleidoscope::Emoji Emoji;
