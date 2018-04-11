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
  case EMOJI_JOYFUL:
    return EmojiUnicode(0x1F602);
  case EMOJI_SMILE:
    return EmojiUnicode(0x1F603);
  case EMOJI_WINK:
    return EmojiUnicode(0x1F609);
  case EMOJI_BLUSH:
    return EmojiUnicode(0x1F60A);
  case EMOJI_CONFIDENT:
    return EmojiUnicode(0x1F60E);
  case EMOJI_FLIRTY:
    return EmojiUnicode(0x1F618);
  case EMOJI_MISCHIEVOUS:
    return EmojiUnicode(0x1F61C);
  case EMOJI_ANNOYED:
    return EmojiUnicode(0x1F624);
  case EMOJI_EXPLODING_HEAD:
    return EmojiUnicode(0x1F92F);
  case EMOJI_GRIMACED:
    return EmojiUnicode(0x1F62C);
  case EMOJI_FLUSHED:
    return EmojiUnicode(0x1F633);
  case EMOJI_CRAZY:
    return EmojiUnicode(0x1F92A);
  case EMOJI_VOMITING:
    return EmojiUnicode(0x1F92E);
  case EMOJI_CROSSBONES:
    return EmojiUnicode(0x2620);
  case EMOJI_VULCAN:
    return EmojiUnicode(0x1F596);
  case EMOJI_METAL:
    return EmojiUnicode(0x1F918);
  case EMOJI_WAVE:
    return EmojiUnicode(0x1F44B);
  case EMOJI_HEART:
    return EmojiUnicode(0x2764);
  case EMOJI_BOOM:
    return EmojiUnicode(0x1F4A5);
  case EMOJI_UNICORN_FACE:
    return EmojiUnicode(0x1F984);
  case EMOJI_SNAIL:
    return EmojiUnicode(0x1F40C);
  case EMOJI_SUNFLOWER:
    return EmojiUnicode(0x1F33B);
  case EMOJI_PEACH:
    return EmojiUnicode(0x1F351);
  case EMOJI_CONSTRUCTION:
    return EmojiUnicode(0x1F6A7);
  case EMOJI_ROCKET:
    return EmojiUnicode(0x1F680);
  case EMOJI_SPARKLES:
    return EmojiUnicode(0x2728);
  case EMOJI_BALLOON:
    return EmojiUnicode(0x1F388);
  case EMOJI_PARTY:
    return EmojiUnicode(0x1F389);
  case EMOJI_GIFT:
    return EmojiUnicode(0x1F381);
  case EMOJI_MOBILE:
    return EmojiUnicode(0x1F4F1);
  case EMOJI_KEYBOARD:
    return EmojiUnicode(0x2328);
  case EMOJI_ENVELOPE:
    return EmojiUnicode(0x2709);
  case EMOJI_SHOPPING_CART:
    return EmojiUnicode(0x1F6D2);
  case EMOJI_WARNING:
    return EmojiUnicode(0x26A0);
  case EMOJI_WHITE_CHECK_MARK:
    return EmojiUnicode(0x2705);
  case EMOJI_CROSS_MARK:
    return EmojiUnicode(0x274C);
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
