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
namespace {

static void typeEmojiUnicodeForKey(Key key);
static void typeEmojiUnicodeCharacter(uint32_t character);
static void typeEmojiUnicodeSequence(uint32_t sequence[], size_t size);

} // namespace
} // namespace kaleidoscope


namespace kaleidoscope {

EventHandlerResult Emoji::onKeyswitchEvent(Key &mapped_key, byte row, byte col, uint8_t keyState) {
  if (mapped_key.raw < EMOJI_FIRST || mapped_key.raw > EMOJI_LAST) {
    return EventHandlerResult::OK;
  }

  if (!keyToggledOn(keyState)) {
    return EventHandlerResult::EVENT_CONSUMED;
  }

  typeEmojiUnicodeForKey(mapped_key);

  return EventHandlerResult::EVENT_CONSUMED;
}


namespace {

void typeEmojiUnicodeForKey(Key key) {
  switch (key.raw) {
  case EMOJI_JOYFUL:
    typeEmojiUnicodeCharacter(0x1F602);
  case EMOJI_SMILE:
    typeEmojiUnicodeCharacter(0x1F603);
  case EMOJI_WINK:
    typeEmojiUnicodeCharacter(0x1F609);
  case EMOJI_BLUSH:
    typeEmojiUnicodeCharacter(0x1F60A);
  case EMOJI_CONFIDENT:
    typeEmojiUnicodeCharacter(0x1F60E);
  case EMOJI_FLIRTY:
    typeEmojiUnicodeCharacter(0x1F618);
  case EMOJI_THINKING:
    typeEmojiUnicodeCharacter(0x1F914);
  case EMOJI_DISBELIEF:
    typeEmojiUnicodeCharacter(0x1F644);
  case EMOJI_MISCHIEVOUS:
    typeEmojiUnicodeCharacter(0x1F61C);
  case EMOJI_UPSIDE_DOWN:
    typeEmojiUnicodeCharacter(0x1F643);
  case EMOJI_ANNOYED:
    typeEmojiUnicodeCharacter(0x1F624);
  case EMOJI_EXPLODING_HEAD:
    typeEmojiUnicodeCharacter(0x1F92F);
  case EMOJI_GRIMACED:
    typeEmojiUnicodeCharacter(0x1F62C);
  case EMOJI_FLUSHED:
    typeEmojiUnicodeCharacter(0x1F633);
  case EMOJI_CRAZY:
    typeEmojiUnicodeCharacter(0x1F92A);
  case EMOJI_ILL:
    typeEmojiUnicodeCharacter(0x1F637);
  case EMOJI_VOMITING:
    typeEmojiUnicodeCharacter(0x1F92E);
  case EMOJI_NERD:
    typeEmojiUnicodeCharacter(0x1F913);
  case EMOJI_CROSSBONES:
    typeEmojiUnicodeCharacter(0x2620);
  case EMOJI_MAN_DANCING:
    typeEmojiUnicodeCharacter(0x1F57A);
  case EMOJI_VULCAN:
    typeEmojiUnicodeCharacter(0x1F596);
  case EMOJI_METAL:
    typeEmojiUnicodeCharacter(0x1F918);
  case EMOJI_THUMBSUP:
    typeEmojiUnicodeCharacter(0x1F44D);
  case EMOJI_THUMBSDOWN:
    typeEmojiUnicodeCharacter(0x1F44E);
  case EMOJI_WAVE:
    typeEmojiUnicodeCharacter(0x1F44B);
  case EMOJI_EYES:
    typeEmojiUnicodeCharacter(0x1F440);
  case EMOJI_HEART:
    typeEmojiUnicodeCharacter(0x2764);
  case EMOJI_BOOM:
    typeEmojiUnicodeCharacter(0x1F4A5);
  case EMOJI_HOLE:
    typeEmojiUnicodeCharacter(0x1F573);
  case EMOJI_UNICORN_FACE:
    typeEmojiUnicodeCharacter(0x1F984);
  case EMOJI_SNAIL:
    typeEmojiUnicodeCharacter(0x1F40C);
  case EMOJI_CRICKET:
    typeEmojiUnicodeCharacter(0x1F997);
  case EMOJI_SUNFLOWER:
    typeEmojiUnicodeCharacter(0x1F33B);
  case EMOJI_PEACH:
    typeEmojiUnicodeCharacter(0x1F351);
  case EMOJI_CONSTRUCTION:
    typeEmojiUnicodeCharacter(0x1F6A7);
  case EMOJI_ROCKET:
    typeEmojiUnicodeCharacter(0x1F680);
  case EMOJI_HOURGLASS_FLOWING:
    typeEmojiUnicodeCharacter(0x23F3);
  case EMOJI_SPARKLES:
    typeEmojiUnicodeCharacter(0x2728);
  case EMOJI_BALLOON:
    typeEmojiUnicodeCharacter(0x1F388);
  case EMOJI_PARTY:
    typeEmojiUnicodeCharacter(0x1F389);
  case EMOJI_GIFT:
    typeEmojiUnicodeCharacter(0x1F381);
  case EMOJI_MOBILE:
    typeEmojiUnicodeCharacter(0x1F4F1);
  case EMOJI_KEYBOARD:
    typeEmojiUnicodeCharacter(0x2328);
  case EMOJI_ENVELOPE:
    typeEmojiUnicodeCharacter(0x2709);
  case EMOJI_SHOPPING_CART:
    typeEmojiUnicodeCharacter(0x1F6D2);
  case EMOJI_WARNING:
    typeEmojiUnicodeCharacter(0x26A0);
  case EMOJI_WHITE_CHECK_MARK:
    typeEmojiUnicodeCharacter(0x2705);
  case EMOJI_CROSS_MARK:
    typeEmojiUnicodeCharacter(0x274C);
  }
}

void typeEmojiUnicodeCharacter(uint32_t character) {
  uint32_t sequence[1] = {character};
  typeEmojiUnicodeSequence(sequence, 1);
}

void typeEmojiUnicodeSequence(uint32_t sequence[], size_t size) {
  emojiTypingWillStart();
  Unicode::start();

  for (uint8_t i = 0; i < size; i++) {
    Unicode::typeCode(sequence[i]);
  }

  Unicode::end();
  emojiTypingDidFinish();
}

} // namespace
} // namespace kaleidoscope

__attribute__((weak)) void emojiTypingWillStart() {
}
__attribute__((weak)) void emojiTypingDidFinish() {
}

kaleidoscope::Emoji Emoji;
