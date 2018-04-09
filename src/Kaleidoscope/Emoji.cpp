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

#include <Kaleidoscope-Emoji.h>
#include <Kaleidoscope-Unicode.h>


namespace kaleidoscope {

Emoji::Emoji(void) {

}

void Emoji::begin(void) {
  Kaleidoscope.useEventHandlerHook(eventHandlerHook);
}

Key Emoji::eventHandlerHook(Key mapped_key, byte row, byte col, uint8_t key_state) {
  if (mapped_key.raw < EMOJI_FIRST || mapped_key.raw > EMOJI_LAST) {
    return mapped_key;
  }

  if (!keyToggledOn(key_state)) {
    return Key_NoKey;
  }

  EmojiUnicode emoji = emojiForKey(mapped_key);
  typeEmoji(emoji);

  return Key_NoKey;
}

Emoji::EmojiUnicode Emoji::emojiForKey(Key key) {
  switch (key.raw) {
  case EMOJI_ALERT:
    return EmojiUnicode(0x26A0, 0xFE0F);
  case EMOJI_BOOM:
    return EmojiUnicode(0x1F4A5);
  case EMOJI_CHECK:
    return EmojiUnicode(0x2705);
  case EMOJI_CRAZY:
    return EmojiUnicode(0x1F92A);
  case EMOJI_EYES:
    return EmojiUnicode(0x1F633);
  case EMOJI_FLOWER:
    return EmojiUnicode(0x1F33B);
  case EMOJI_GRIMACE:
    return EmojiUnicode(0x1F62C);
  case EMOJI_JOY:
    return EmojiUnicode(0x1F602);
  case EMOJI_KISS:
    return EmojiUnicode(0x1F618);
  case EMOJI_MAD:
    return EmojiUnicode(0x1F624);
  case EMOJI_PARTY:
    return EmojiUnicode(0x1F389);
  case EMOJI_PEACH:
    return EmojiUnicode(0x1F351);
  case EMOJI_PRESENT:
    return EmojiUnicode(0x1F381);
  case EMOJI_ROCKET:
    return EmojiUnicode(0x1F680);
  case EMOJI_SMILE:
    return EmojiUnicode(0x1F60A);
  case EMOJI_SUNGLASSES:
    return EmojiUnicode(0x1F60E);
  case EMOJI_THINKING:
    return EmojiUnicode(0x1F914);
  case EMOJI_THUMBSDOWN:
    return EmojiUnicode(0x1F44E);
  case EMOJI_THUMBSUP:
    return EmojiUnicode(0x1F44D);
  case EMOJI_TONGUE:
    return EmojiUnicode(0x1F61C);
  case EMOJI_UNICORN:
    return EmojiUnicode(0x1F984);
  case EMOJI_VOMIT:
    return EmojiUnicode(0x1F92E);
  case EMOJI_WAVE:
    return EmojiUnicode(0x1F44B);
  }
  return EmojiUnicode();
}

void Emoji::typeEmoji(EmojiUnicode emoji) {
  kaleidoscope::Unicode::start();
  kaleidoscope::Unicode::typeCode(emoji.character);
  if (emoji.variation > 0) {
    kaleidoscope::Unicode::typeCode(emoji.variation);
  }
  kaleidoscope::Unicode::end();
}

}

kaleidoscope::Emoji Emoji;
