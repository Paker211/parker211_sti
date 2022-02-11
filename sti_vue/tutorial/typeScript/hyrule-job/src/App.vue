<template>
  <div class="app">
    hello, hyrule.
    <p>{{ name }} - {{ age }}</p>
    <button @click="changeName('Zico')">changeName</button>
    <button @click="changeAge('40')">changeAge</button>
  </div>
</template>

<script lang="ts">
import { defineComponent } from 'vue';

export default defineComponent({
  name: 'App',
  components: {},
  data() {
    return {
      name: 'Link',
      age: 23 as number | string,
    }
  },
  methods: {
    changeName(name: string) {
      this.name = name ;
    },
    changeAge(age: number | string) {
      this.age = age ;
    }

  }
});
</script>

<style>
</style>
